#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cml.h"

void ex6(const matrix *m) {
    printf("\nExercise 6\n");
    // Print the sum of the elements for each matrix column
    for (int i = 0; i < m->cols; i++) {
        int sum = matrix_sum_col(m, i);
        printf("Sum of column %d: %d\n", i, sum);
    }
    printf("\n");
    // Print the maximum element for each column and its position
    for (int i = 0; i < m->cols; i++) {
        cell c = matrix_max_col_pos(m, i);
        printf("Max element of column %d: %d at position %d\n", i, c.value, c.pos);
    }
    printf("\n");
    // Print the minimum element for each column and its position
    for (int i = 0; i < m->cols; i++) {
        cell c = matrix_min_col_pos(m, i);
        printf("Min element of column %d: %d at position %d\n", i, c.value, c.pos);
    }
    printf("\n");
    // Print the maximum element for each row and its position
    for (int i = 0; i < m->rows; i++) {
        cell c = matrix_max_row_pos(m, i);
        printf("Max element of row %d: %d at position %d\n", i, c.value, c.pos);
        // Now we get the row in which the max element is
        int row = c.pos / m->cols;
        printf("The row in which the max element is: %d\n", row);
        // Now we get the minimum of that column
        cell c2 = matrix_min_col_pos(m, c.pos % m->cols);
        printf("The min element of the row: %d at position %d\n", c2.value, c2.pos);
        printf("\n");
    }
}

// Given a matrix a[n][m] and two integers k and g
// such that k<g<n and k<m.
// Find the sum of the rows of elements between k and g
// Find the average of the rows of elements between k and g
// Find the average of the column k
void ex7(const matrix *m) {
    // FIXME unclear: if k<g<n, than k and g must be
    // column and row indexes.
    // however, it's later written that
    // we must find elements between k and g,
    // assuming they are elements index.
    // So are they row/column indexes or element indexes?
    printf("\nExercise 7\n");
    int k = (rand() % (m->rows - 1)) + 1;
    int g = (rand() % (m->rows - k)) + k + 1;
    printf("k: %d, g: %d\n", k, g);
    // FIXME unclear: sum of each row or some of all selected rows?
    for (int i = k; i <= g; i++) {
        int sum = matrix_sum_row(m, i);
        printf("Sum of row %d: %d\n", i, sum);
        int avg = sum / m->cols;
        printf("Average of row %d: %d\n", i, avg);
    }
    int avg = matrix_avg_col(m, k);
    printf("Average of column %d: %d\n", k, avg);

    printf("\n");

}

// List the k column of this matrix
void ex9(const matrix *m) {
    printf("\nExercise 9\n");
    int k = rand() % (m->cols);
    printf("k: %d\n", k);
    matrix_print_col(m, k);
    printf("\n");
}

// Ex 11: create a new matrix:
// a) with the same values
// b) increasing the value by the sum of the index
// c) replacing the value with the index
void ex11(const matrix *m) {
    printf("\nExercise 11\n");
    matrix *m2 = matrix_copy(m);
    matrix_print(m2);
    matrix_free(m2);
    printf("\n");
    matrix *m3 = matrix_copy(m);
    for (int i = 0; i < m-> rows * m->cols; i++) {
        m3->data[i] += i;
    }
    matrix_print(m3);
    matrix_free(m3);
    printf("\n");
    matrix *m4 = matrix_copy(m);
    for (int i = 0; i < m->rows * m->cols; i++) {
        m4->data[i] = i;
    }
    matrix_print(m4);
    matrix_free(m4);
    printf("\n");
}

void ex8(const matrix *m) {
    printf("\nExercise 8\n");
    // For each row, check if the elements are equal
    for (int i = 0; i < m-> rows ; i += m->cols){
        for (int j = 0; j < m->cols; j++) {
            int value = m->data[i + j];
            for (int k = j + 1; k < m->cols; k++) {
                if (value != m->data[i + k]) {
                    printf("Row %d is not equal\n", i / m->cols);
                }
            }
        }
    }
    printf("\n");
}

void ex10(const matrix *m) {
    printf("\nExercise 10\n");
    // Print the sum of the diagonal
    int sumd = matrix_sum_diagonal(m);
    printf("Sum of diagonal: %d\n", sumd);
    // Print the sum of the anti-diagonal
    int sumad = matrix_sum_antidiagonal(m);
    printf("Sum of anti-diagonal: %d\n", sumad);
    printf("\n");


}

int main() {
    srand(time(NULL));

    matrix *m = matrix_new(rand() % 5 + 2,rand() % 5 + 2);
    matrix_fill_random(m);
    matrix_print(m);

    // These exercises can be done with the same matrix
    ex6(m);
    ex7(m);
    ex9(m);
    ex11(m);

    matrix_free(m);


    // Exercise 8 requires a square matrix
    m = matrix_new(rand() % 20 + 10,2);
    matrix_fill_random(m);
    matrix_print(m);

    ex8(m);

    matrix_free(m);

    // Exercise 10 requires an elongated matrix
    int randn = rand() % 8 + 1;
    m = matrix_new(randn, randn);
    matrix_fill_random(m);
    matrix_print(m);

    ex10(m);

    matrix_free(m);

}