//
// Created by Tomek Olkuski on 27/10/2021.
//

#ifndef MATRIX_CALC_MATRIXFUNCTIONS_H
#define MATRIX_CALC_MATRIXFUNCTIONS_H

int **addMatrix(int **a, int **b, int rows, int columns);
double **addMatrix(double **c, double **d, int rows, int columns);
int **subtractMatrix(int **a, int **b, int rows, int columns);
double **subtractMatrix(double **a, double **b, int rows, int columns);
int **multiplyMatrix(int **a, int **b, int rows1, int columns1, int columns2);
double **multiplyMatrix(double **c, double **d, int rows1, int columns1, int columns2);
int **multiplyByScalar(int **a, int rows, int columns, int scalar);
double **multiplyByScalar(double **a, int rows, int columns, double scalar);
int **transpozeMatrix(int **a, int rows, int columns);
double **transpozeMatrix(double **a, int rows, int columns);
int **powerMatrix(int **a, int rows, int columns, unsigned degree);
double **powerMatrix(double **a, int rows, int columns, unsigned degree);
int determinantMatrix(int **matrix, int rows, int columns);
double determinantMatrix(double **matrix, int rows, int columns);
bool matrixIsDiagonal(int **a, int rows, int columns);
bool matrixIsDiagonal(double **a, int rows, int columns);
void swap(int *a, int *b);
void swap(double *a, double *b);
int sortRow(int *a, int columns);
void sortRow(double *a, int columns);
int **sortRowsInMatrix(int **a, int rows, int columns);
double **sortRowsInMatrix(double **a, int rows, int columns);
void printIntMatrix(int **result_m, int rows, int columns);
void printDoubleMatrix(double **result_m, int rows, int columns);

#endif //MATRIX_CALC_MATRIXFUNCTIONS_H
