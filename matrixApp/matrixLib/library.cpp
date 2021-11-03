//
// Created by Tomek Olkuski on 27/10/2021.
//

#include <iostream>
#include <math.h>
using namespace std;

void printIntMatrix(int **result_m, int rows, int columns){
    cout<<"Printing final matrix"<<endl;
    for (int counter = 0; counter < rows; ++counter){
        for (int i = 0; i < columns; ++i){
            cout<<result_m[counter][i]<<"    ";
        }
        cout<<endl;
    }
}

void printDoubleMatrix(double **result_m, int rows, int columns){
    cout<<"Printing final matrix"<<endl;
    for (int counter = 0; counter < rows; ++counter){
        for (int i = 0; i < columns; ++i){
            cout<<result_m[counter][i]<<"    ";
        }
        cout<<endl;
    }
}

int **addMatrix(int **a, int **b, int rows, int columns) {
    int **e = new int *[rows];
    for(int i = 0; i < rows; i++){
        e[i] = new int[columns];
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            e[j][i] = a[i][j] + b[i][j];
        }
    }
    return e;
}

double **addMatrix(double **a, double **b, int rows, int columns){
    double **e = new double *[rows];
    for(int i = 0; i < rows; i++){
        e[i] = new double[columns];
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            e[j][i] = a[i][j] + b[i][j];
        }
    }
    return e;
}

int **subtractMatrix(int **a, int **b, int rows, int columns){
    int **e = new int *[rows];
    for(int i = 0; i < rows; i++){
        e[i] = new int[columns];
    }
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            e[j][i] = a[j][i] - b[j][i];
        }
    }
    return e;
}

double **subtractMatrix(double **a, double **b, int rows, int columns){
    double **e = new double *[rows];
    for(int i = 0; i < rows; i++){
        e[i] = new double[columns];
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            e[i][j] = a[j][i] - b[j][i];
        }
    }
    return e;
}

int **multiplyMatrix(int **a, int **b, int rows1, int columns1, int columns2){
    int **e = new int *[rows1];
    for(int i = 0; i < rows1; i++){
        e[i] = new int[columns2];
    }
    for (int i = 0; i < columns2; ++i){
        for (int j = 0; j < rows1; ++j){
            int sum = 0;
            for (int k = 0; k < columns1; ++k){
                sum += a[i][k] * b[k][j];
            }
            e[i][j] = sum;
        }
    }
    return e;
}

double **multiplyMatrix(double **c, double **d, int rows1, int columns1, int columns2){
    double **e = new double *[rows1];
    for(int i = 0; i < rows1; i++){
        e[i] = new double[columns2];
    }
    for (int i = 0; i < rows1; ++i){
        for (int j = 0; j < columns2; ++j){
            double sum = 0;
            for (int k = 0; k < columns1; ++k){
                sum += c[i][k] * d[k][j];
            }
            e[i][j] = sum;
        }
    }
    return e;
}

int **multiplyByScalar(int **a, int rows, int columns, int scalar){
    int **e = new int*[rows];
    for (int counter = 0; counter < rows; ++counter){
        e[counter] = new int[columns];
    }
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            e[i][counter] = (a[i][counter] * scalar);
        }
    }
    return e;
}

double **multiplyByScalar(double **a, int rows, int columns, double scalar){
    double **e = new double*[rows];
    for (int counter = 0; counter < rows; ++counter){
        e[counter] = new double[columns];
    }
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            e[i][counter] = (a[i][counter] * scalar);
        }
    }
    return e;
}

int **transpozeMatrix(int **a, int rows, int columns){
    int **e = new int*[columns];
    for (int counter = 0; counter < columns; ++counter){
        e[counter] = new int[rows];
    }
    for (int counter = 0; counter < rows; ++counter){
        for (int i = 0; i < columns; ++i){
            e[i][counter] = a[counter][i];
        }
    }
    return e;
}

double **transpozeMatrix(double **a, int rows, int columns){
    double **e = new double*[columns];
    for (int counter = 0; counter < columns; ++counter){
        e[counter] = new double[rows];
    }
    for (int counter = 0; counter < rows; ++counter){
        for (int i = 0; i < columns; ++i){
            e[i][counter] = a[counter][i];
        }
    }
    return e;
}

int **powerMatrix(int **a, int rows, int columns, unsigned degree){
    int **e = new int*[rows];
    for (int counter = 0; counter < rows; ++counter){
        e[counter] = new int[columns];
    }
    if (degree == 0){
        for (int counter = 0; counter < columns; ++counter){
            for (int i = 0; i < rows; ++i){
                if (counter == i){
                    e[i][counter] = 1;
                }
                else {
                    e[i][counter] = 0;
                }
            }
        }
        return e;
    }
    int b[rows][columns];
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            e[counter][i] = a[counter][i];
        }
    }
    for (int degree_counter = 1; degree_counter < degree; ++degree_counter){
        for (int counter = 0; counter < columns; ++counter){
            for (int i = 0; i < rows; ++i){
                b[counter][i] = e[counter][i];
            }
        }
        for (int counter = 0; counter < columns; ++counter){
            for (int j = 0; j < rows; ++j){
                int sum = 0;
                for (int i = 0; i < rows; ++i){
                    sum += a[counter][i] * b[i][j];
                }
                e[counter][j] = sum;
            }
        }
    }
    return e;
}

double **powerMatrix(double **a, int rows, int columns, unsigned degree){
    double **e = new double*[rows];
    for (int counter = 0; counter < rows; ++counter){
        e[counter] = new double[columns];
    }
    if (degree == 0){
        for (int counter = 0; counter < columns; ++counter){
            for (int i = 0; i < rows; ++i){
                if (counter == i){
                    e[i][counter] = 1;
                }
                else {
                    e[i][counter] = 0;
                }
            }
        }
        return e;
    }
    double b[rows][columns];
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            e[counter][i] = a[counter][i];
        }
    }
    for (int degree_counter = 1; degree_counter < degree; ++degree_counter){
        for (int counter = 0; counter < columns; ++counter){
            for (int i = 0; i < rows; ++i){
                b[counter][i] = e[counter][i];
            }
        }
        for (int counter = 0; counter < columns; ++counter){
            for (int j = 0; j < rows; ++j){
                double sum = 0;
                for (int i = 0; i < rows; ++i){
                    sum += a[counter][i] * b[i][j];
                }
                e[counter][j] = sum;
            }
        }
    }
    return e;
}

int determinantMatrix(int **matrix, int rows, int columns){
    int det = 0;
    int n = rows;
    int **submatrix = new int*[rows];
    for (int counter = 0; counter < rows; ++counter){
        submatrix[counter] = new int[columns];
    }
    if (n == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinantMatrix(submatrix, n - 1, n - 1));
        }
    }
    return det;
}

double determinantMatrix(double **matrix, int rows, int columns){
    double det = 0;
    int n = rows;
    double **submatrix = new double*[rows];
    for (int counter = 0; counter < rows; ++counter){
        submatrix[counter] = new double[columns];
    }
    if (n == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinantMatrix(submatrix, n - 1, n - 1));
        }
    }
    return det;
}

bool matrixIsDiagonal(int **a, int rows, int columns){
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            if (counter != i && a[i][counter] != 0){
                return false;
            }
        }
    }
    return true;
}

bool matrixIsDiagonal(double **a, int rows, int columns){
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            if (counter != i && a[i][counter] != 0){
                return false;
            }
        }
    }
    return true;
}

void swap(int *a, int *b){
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

void swap(double *a, double *b){
    cout<<"alive2"<<endl;
    double x;
    x = *a;
    *a = *b;
    *b = x;
}

void sortRow(int *a, int columns){
    bool sorted;
    do{
        sorted = true;
        for (int counter = 0; counter < columns - 1; ++counter){
            if (*(a + counter) > *(a + counter + 1)){
                sorted = false;
                swap(*(a + counter), *(a + counter + 1));
            }
        }
    } while (!sorted);
}

void sortRow(double *a, int columns){
    bool sorted;
    do{
        sorted = true;
        for (int counter = 0; counter < columns - 1; ++counter){
            if (*(a + counter) > *(a + counter + 1)){
                sorted = false;
                swap(*(a + counter), *(a + counter + 1));
            }
        }
    } while (!sorted);
}

int **sortRowsInMatrix(int **a, int rows, int columns){
    for (int counter = 0; counter < rows; ++counter){
        sortRow(*(a + counter), columns);
    }
    int **e = new int*[rows];
    for (int counter = 0; counter < rows; ++counter){
        e[counter] = new int[columns];
    }
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            e[i][counter] = a[i][counter];
        }
    }
    return e;
}

double **sortRowsInMatrix(double **a, int rows, int columns){
    for (int counter = 0; counter < rows; ++counter){
        sortRow(*(a + counter), columns);
    }
    double **e = new double*[rows];
    for (int counter = 0; counter < rows; ++counter){
        e[counter] = new double[columns];
    }
    for (int counter = 0; counter < columns; ++counter){
        for (int i = 0; i < rows; ++i){
            e[i][counter] = a[i][counter];
        }
    }
    return e;
}