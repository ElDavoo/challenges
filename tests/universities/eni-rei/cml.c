#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include "cml.h"

// Common Matrix Library

/**
 * Creates a new matrix with the given dimensions.
 * @param rows Number of rows.
 * @param cols Number of columns.
 * @return  A new matrix.
 */
matrix *matrix_new(const int rows, const int cols) {
    // Allocate a new matrix struct
    matrix *m = malloc(sizeof(matrix));
    // Set the dimensions
    m->rows = rows;
    m->cols = cols;
    // Allocate and fill the data array
    m->data = malloc(sizeof(double) * rows * cols);
    matrix_fill(m, 0);
    return m;
}

/**
 * Creates a new matrix asking the dimensions from the user.
 * @return A new matrix.
 */
matrix *matrix_new_ask_dimensions() {
    printf("Enter the number of rows: ");
    int rows = read_int();
    printf("Enter the number of columns: ");
    int cols = read_int();
    return matrix_new(rows, cols);
}

/**
 * Asks the user for the data of the matrix.
 * @param m The matrix.
 */
void matrix_ask_data(const matrix *m) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            printf("Enter the value of element (%d, %d): ", i, j);
            m->data[i * m->cols + j] = read_int();
        }
    }
}

/**
 * Fills the matrix with the given value.
 * @param m The matrix.
 * @param value The value to fill the matrix with.
 */
void matrix_fill(const matrix *m, const int value) {
    for (int i = 0; i < m->rows * m->cols; i++) {
        m->data[i] = value;
    }
}

/**
 * Fills the matrix with random values.
 * @param m The matrix.
 */
void matrix_fill_random(const matrix *m) {
    for (int i = 0; i < m->rows * m->cols; i++) {
        m->data[i] = rand() % 100;
    }
}

/**
 * Copies the given matrix.
 * @param m The matrix to copy.
 * @return A copy of the matrix.
 */
matrix *matrix_copy(const matrix *m) {
    matrix *n = matrix_new(m->rows, m->cols);
    for (int i = 0; i < m->rows * m->cols; i++) {
        n->data[i] = m->data[i];
    }
    return n;
}

/**
 * Prints a row of the matrix.
 * @param m The matrix.
 * @param row The index of the row to print.
 */
void matrix_print_row(const matrix *m, const int row) {
    for (int i = 0; i < m->cols; i++) {
        printf("%d\t", m->data[row * m->cols + i]);
    }
    printf("\n");
}

/**
 * Prints a column of the matrix.
 * @param m The matrix.
 * @param col The index of the column to print.
 */
void matrix_print_col(const matrix *m, const int col) {
    for (int i = 0; i < m->rows; i++) {
        printf("%d\n", m->data[i * m->cols + col]);
    }
    printf("\n");
}

/**
 * Prints the matrix.
 * @param m The matrix.
 */
void matrix_print(const matrix *m) {
    for (int i = 0; i < m->rows; i++) {
        matrix_print_row(m, i);
    }
}

/**
 * Gets the index and the value of the maximum value of a row.
 * @param m The matrix.
 * @param row The index of the row.
 * @return The index and the value of the maximum of the row.
 */
cell matrix_max_row_pos(const matrix *m, const int row) {
    cell max = {m->data[row * m->cols], row * m->cols};
    for (int i = 0; i < m->cols; i++) {
        if (m->data[row * m->cols + i] > max.value) {
            max.value = m->data[row * m->cols + i];
            max.pos = row * m->cols + i;
        }
    }
    return max;
}

/**
 * Gets the index and the value of the minimum value of a row.
 * @param m The matrix.
 * @param row The index of the row.
 * @return The index and the value of the minimum of the row.
 */
cell matrix_min_row_pos(const matrix *m, const int row) {
    cell min = {m->data[row * m->cols], row * m->cols};
    for (int i = 0; i < m->cols; i++) {
        if (m->data[row * m->cols + i] < min.value) {
            min.value = m->data[row * m->cols + i];
            min.pos = row * m->cols + i;
        }
    }
    return min;
}

/**
 * Gets the index and the value of the maximum value of a column.
 * @param m The matrix.
 * @param col The index of the column.
 * @return The index and the value of the maximum of the column.
 */
cell matrix_max_col_pos(const matrix *m, const int col) {
    cell max = {m->data[col], col};
    for (int i = 0; i < m->rows; i++) {
        if (m->data[i * m->cols + col] > max.value) {
            max.value = m->data[i * m->cols + col];
            max.pos = i * m->cols + col;
        }
    }
    return max;
}

/**
 * Gets the index and the value of the minimum value of a column.
 * @param m The matrix.
 * @param col The index of the column.
 * @return The index and the value of the minimum of the column.
 */
cell matrix_min_col_pos(const matrix *m, const int col) {
    cell min = {m->data[col], col};
    for (int i = 0; i < m->rows; i++) {
        if (m->data[i * m->cols + col] < min.value) {
            min.value = m->data[i * m->cols + col];
            min.pos = i * m->cols + col;
        }
    }
    return min;
}

/**
 * Returns the sum of all elements of a column.
 * @param m The matrix.
 * @param col The column index.
 * @return The sum of all elements of the column.
 */
int matrix_sum_col(const matrix *m, const int col) {
    int sum = 0;
    for (int i = 0; i < m->rows; i++) {
        sum += m->data[i * m->cols + col];
    }
    return sum;
}

/**
 * Returns the sum of all elements of a row.
 * @param m The matrix.
 * @param row The row index.
 * @return The sum of all elements of the row.
 */
int matrix_sum_row(const matrix *m, const int row) {
    int sum = 0;
    for (int i = 0; i < m->cols; i++) {
        sum += m->data[row * m->cols + i];
    }
    return sum;
}

/**
 * Returns the sum of the main diagonal of the matrix.
 * @param m The matrix.
 * @return The sum of the main diagonal.
 */
int matrix_sum_diagonal(const matrix *m) {
    int sum = 0;
    for (int i = 0; i < m->rows; i++) {
        sum += m->data[i * m->cols + i];
    }
    return sum;
}

/**
 * Returns the sum of the anti-diagonal of the matrix.
 * @param m The matrix.
 * @return The sum of the anti-diagonal.
 */
int matrix_sum_antidiagonal(const matrix *m) {
    int sum = 0;
    for (int i = 0; i < m->rows; i++) {
        sum += m->data[(m->rows - i - 1) * m->cols + i];
    }
    return sum;
}

/**
 * Returns the average of a row of a matrix
 * @param m The matrix
 * @param row The row index
 * @return The average of the row
 */
int matrix_avg_row(const matrix *m, const int row) {
    return matrix_sum_row(m, row) / m->cols;
}

/**
 * Returns the average of a column of a matrix
 * @param m The matrix
 * @param col The column index
 * @return The average of the column
 */
int matrix_avg_col(const matrix *m, const int col) {
    return matrix_sum_col(m, col) / m->rows;
}

/**
 * Deallocates the memory used by the matrix.
 * @param m The matrix to be deallocated.
 */
void matrix_free(const matrix *m) {
    free(m->data);
    free(m);
}

/**
 * Reads a line of maximum 100 characters from stdin.
 * @return The line read.
 */
char *read_line() {
    char *line = malloc(sizeof(char) * 100);
    fgets(line, 100, stdin);
    return line;
}

/**
 * Reads an integer from stdin.
 * @return The integer read.
 */
int read_int() {
    // Get the line.
    char *input = read_line();
    // Convert the line to a long.
    long result = strtol(input, NULL, 10);
    // Free the line.
    free(input);
    // Cast the long to int, and return it.
    assert(result <= INT_MAX);
    return (int)result;
}

