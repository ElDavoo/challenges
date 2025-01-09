#ifndef ENI_REI_CML_H
#define ENI_REI_CML_H

/**
 * A matrix.
 */
typedef struct {
    int rows;
    int cols;
    int *data;
} matrix;

/**
 * This struct is used to return both the index and the value of a cell.
 */
typedef struct {
    int value;
    int pos;
} cell;


char *read_line();
int read_int();


matrix *matrix_new(int rows, int cols);
matrix *matrix_new_ask_dimensions();

void matrix_ask_data(const matrix *m);
void matrix_fill(const matrix *m, int value);
void matrix_fill_random(const matrix *m);

matrix *matrix_copy(const matrix *m);

void matrix_print_row(const matrix *m, int row);
void matrix_print_col(const matrix *m, int col);
void matrix_print(const matrix *m);

cell matrix_max_row_pos(const matrix *m, int row);
cell matrix_min_row_pos(const matrix *m, int row);
cell matrix_max_col_pos(const matrix *m, int col);
cell matrix_min_col_pos(const matrix *m, int col);

int matrix_sum_col(const matrix *m, int col);
int matrix_sum_row(const matrix *m, int row);
int matrix_sum_diagonal(const matrix *m);
int matrix_sum_antidiagonal(const matrix *m);

int matrix_avg_row(const matrix *m, int row);
int matrix_avg_col(const matrix *m, int col);

void matrix_free(const matrix *m);

#endif //ENI_REI_CML_H
