//
// Created by Tomek Olkuski on 27/10/2021.
//

#include <iostream>
#include <string.h>
#include "../include/matrixFunctions.h"

using namespace std;

int main(int argc, char *argv[]){
    if (argc != 2){
        cout<<"Wrong number of parameters, type help"<<endl;
        exit(-1);
    }
    if (strcmp(argv[1], "addMatrix") != 0 && strcmp(argv[1], "subtractMatrix") != 0 && strcmp(argv[1], "multiplyMatrix") != 0 && strcmp(argv[1], "multiplyByScalar") != 0 && strcmp(argv[1], "transpozeMatrix") != 0 && strcmp(argv[1], "powerMatrix") != 0 && strcmp(argv[1], "determinantMatrix") != 0 && strcmp(argv[1], "matrixIsDiagonal") != 0 && strcmp(argv[1], "sortRowsInMatrix") != 0){
        cout<<endl;
        cout<<"matrixApp"<<endl;
        cout<<endl;
        cout<<"Aby odpalic program, odpal matrixApp w matrixApp/build/src poprzez ./matrixApp <nazwa_dzialania>"<<endl;
        cout<<endl;
        cout<<"Dzialania do wyboru:"<<endl;
        cout<<endl;
        cout<<"addMatrix"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, pozniej ilosc wierszy i kolumn drugiej macierzy, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tDodaje dwie macierze i wyświetla macierz wynikową"<<endl;
        cout<<endl;
        cout<<"subtractMatrix"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, pozniej ilosc wierszy i kolumn drugiej macierzy, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tOdejmuje macierz drugą od pierwszej i wyświetla macierz wynikową"<<endl;
        cout<<endl;
        cout<<"multiplyMatrix"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, pozniej ilosc wierszy i kolumn drugiej macierzy, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tMnoży macierz pierwszą przez drugą i wyświetla macierz wynikową"<<endl;
        cout<<endl;
        cout<<"multiplyByScalar"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, a nastepnie uzupelniamy macierz liczbami, nastepnie podajemy liczbę przez, którą mnożymy macierz"<<endl;
        cout<<"\tMnoży macierz przez liczbę i wyświetla macierz wynikową"<<endl;
        cout<<endl;
        cout<<"transpozeMatrix"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tDokonuje transpozycji macierzy i wyświetla macierz wynikową"<<endl;
        cout<<endl;
        cout<<"powerMatrix"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, wpisujemy do liczbę, która oznacza potęgę, do której podnosimy macierz, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tPotęguje macierz i wyświetla macierz wynikową"<<endl;
        cout<<endl;
        cout<<"determinantMatrix"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tZnajduje wyznacznik macierzy, po czym wyświetla go w konsoli"<<endl;
        cout<<endl;
        cout<<"matrixIsDiagonal"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tSprawdza czy macierz jest diagonalna, jezeli jest to wyswietla 1, jezeli nie - 0 "<<endl;
        cout<<endl;
        cout<<"sortRowsInMatrix"<<endl;
        cout<<"\tWpisujemy int lub double w zaleznosci na jakich liczbach wykonujemy operacje, nastepnie ilosc wierszy i kolumn pierwszej macierzy, a nastepnie uzupelniamy macierz liczbami, przy czym robimy to po kolumnach, czyli najpierw uzupelniamy kolumne pierwsza, pozniej druga etc"<<endl;
        cout<<"\tSortuje wszystkie wiersze macierzy rosnąco"<<endl;
        cout<<endl;
        exit(0);
    }
    int rows1, rows2;
    int columns1, columns2;
    string determine;
    string operation;
    operation = argv[1];
    cout<<"Choose if you want to matrix of integers or matrix of doubles"<<endl;
    cin>>determine;
    int n = determine.length();
    int x = operation.length();
    char arr_n[n + 1];
    char arr_x[x + 1];
    strcpy(arr_n, determine.c_str());
    strcpy(arr_x, operation.c_str());
    cout<<"Enter the number of rows in the FIRST matrix"<<endl;
    cin>>rows1;
    cout<<"Enter the number of columns in the FIRST matrix"<<endl;
    cin>>columns1;
    if (strcmp(arr_x, "addMatrix") == 0 || strcmp(arr_x, "subtractMatrix") == 0 || strcmp(arr_x, "multiplyMatrix") == 0){
        cout<<"Enter the number of rows in the SECOND matrix"<<endl;
        cin>>rows2;
        cout<<"Enter the number of columns in the SECOND matrix"<<endl;
        cin>>columns2;
    }
    int **a;
    int **b;
    double **c;
    double **d;
    if (strcmp(arr_n, "int") == 0){
        a = new int*[rows1];
        for (int counter = 0; counter < rows1; ++counter){
            a[counter] = new int[columns2];
        }
        if (strcmp(arr_x, "addMatrix") == 0 || strcmp(arr_x, "subtractMatrix") == 0 || strcmp(arr_x, "multiplyMatrix") == 0){
            b = new int*[rows2];
            for (int counter = 0; counter < rows2; ++counter){
                b[counter] = new int[columns2];
            }
        }
        if (strcmp(arr_x, "addMatrix") == 0){
            cout<<"Enter single digits of the FIRST matrix by columns"<<endl;
            for(int counter = 0; counter < rows1; ++counter){
                for (int i = 0; i < columns1; ++i){
                    cin>>a[counter][i];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter single digits of the SECOND matrix by columns"<<endl;
            for (int counter = 0; counter < rows2; ++counter){
                for (int i = 0; i < columns2; ++i){
                    cin>>b[counter][i];
                }
                cout<<"next column"<<endl;
            }
            printIntMatrix(addMatrix(a, b, rows1, columns2),rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] b[counter];
            }
            delete [] b;
            exit(0);
        }
        if (strcmp(arr_x, "subtractMatrix") == 0){
            cout<<"Enter single digits of the FIRST matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter single digits of the SECOND matrix by columns"<<endl;
            for (int counter = 0; counter < columns2; ++counter){
                for (int i = 0; i < rows2; ++i){
                    cin>>b[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printIntMatrix(subtractMatrix(a, b, rows1, columns2),rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] b[counter];
            }
            delete [] b;
            exit(0);
        }
        if (strcmp(arr_x, "multiplyMatrix") == 0){
            cout<<"Enter single digits of the FIRST matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter single digits of the SECOND matrix by columns"<<endl;
            for (int counter = 0; counter < columns2; ++counter){
                for (int i = 0; i < rows2; ++i){
                    cin>>b[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printIntMatrix(multiplyMatrix(a, b, rows1, columns1, columns2),rows1, columns2);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] b[counter];
            }
            delete [] b;
            exit(0);
        }
        if (strcmp(arr_x, "multiplyByScalar") == 0){
            int scalar;
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter a number by which matrix should be multiplicated"<<endl;
            cin>>scalar;
            printIntMatrix(multiplyByScalar(a, rows1, columns1, scalar), rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            exit(0);
        }
        if (strcmp(arr_x, "transpozeMatrix") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printIntMatrix(transpozeMatrix(a, rows1, columns1), columns1, rows1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            exit(0);
        }
        if (strcmp(arr_x, "powerMatrix") == 0){
            unsigned degree;
            cout<<"Enter the number to which the matrix will be enhanced"<<endl;
            cin>>degree;
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printIntMatrix(powerMatrix(a, rows1, columns1, degree), rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            exit(0);
        }
        if (strcmp(arr_x, "determinantMatrix") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<determinantMatrix(a, rows1, columns1)<<endl;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            exit(0);
        }
        if (strcmp(arr_x, "matrixIsDiagonal") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<matrixIsDiagonal(a, rows1, columns1)<<endl;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            exit(0);
        }
        //if (strcmp(arr_x, "swap") == 0){
        //
        //}
        //if (strcmp(arr_x, "sortRow") == 0){
        //
        //}
        if (strcmp(arr_x, "sortRowsInMatrix") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>a[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printIntMatrix(sortRowsInMatrix(a, rows1, columns1), rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] a[counter];
            }
            delete [] a;
            exit(0);
        }
    }
    if (strcmp(arr_n, "double") == 0){
        c = new double*[rows1];
        for (int counter = 0; counter < rows1; ++counter){
            c[counter] = new double[columns1];
        }
        if (strcmp(arr_x, "addMatrix") == 0 || strcmp(arr_x, "subtractMatrix") == 0 || strcmp(arr_x, "multiplyMatrix") == 0){
            d = new double*[rows2];
            for (int counter = 0; counter < rows2; ++counter){
                d[counter] = new double[columns2];
            }
        }
        if (strcmp(arr_x, "addMatrix") == 0){
            cout<<"Enter single digits of the first matrix by columns"<<endl;
            for(int counter = 0; counter < rows1; ++counter){
                for (int i = 0; i < columns1; ++i){
                    cin>>c[counter][i];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter single digits of the second matrix by columns"<<endl;
            for (int counter = 0; counter < rows2; ++counter){
                for (int i = 0; i < columns2; ++i){
                    cin>>d[counter][i];
                }
                cout<<"next column"<<endl;
            }
            printDoubleMatrix(addMatrix(c, d, rows1, columns2),rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] d[counter];
            }
            delete [] d;
            exit(0);
        }
        if (strcmp(arr_x, "subtractMatrix") == 0){
            cout<<"Enter single digits of the first matrix by columns"<<endl;
            for(int counter = 0; counter < rows1; ++counter){
                for (int i = 0; i < columns1; ++i){
                    cin>>c[counter][i];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter single digits of the second matrix by columns"<<endl;
            for (int counter = 0; counter < rows2; ++counter){
                for (int i = 0; i < columns2; ++i){
                    cin>>d[counter][i];
                }
                cout<<"next column"<<endl;
            }
            printDoubleMatrix(subtractMatrix(c, d, rows1, columns2),rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] d[counter];
            }
            delete [] d;
            exit(0);
        }
        if (strcmp(arr_x, "multiplyMatrix") == 0){
            cout<<"Enter single digits of the FIRST matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>c[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter single digits of the SECOND matrix by columns"<<endl;
            for (int counter = 0; counter < columns2; ++counter){
                for (int i = 0; i < rows2; ++i){
                    cin>>d[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printDoubleMatrix(multiplyMatrix(c, d, rows1, columns1, columns2),rows1, columns2);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] d[counter];
            }
            delete [] d;
            exit(0);
        }
        if (strcmp(arr_x, "multiplyByScalar") == 0){
            double scalar;
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>c[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<"Enter a number by which matrix should be multiplicated"<<endl;
            cin>>scalar;
            printDoubleMatrix(multiplyByScalar(c, rows1, columns1, scalar), rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            exit(0);
        }
        if (strcmp(arr_x, "transpozeMatrix") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>c[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printDoubleMatrix(transpozeMatrix(c, rows1, columns1), columns1, rows1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            exit(0);
        }
        if (strcmp(arr_x, "powerMatrix") == 0){
            unsigned degree;
            cout<<"Enter the number to which the matrix will be enhanced"<<endl;
            cin>>degree;
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>c[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printDoubleMatrix(powerMatrix(c, rows1, columns1, degree), rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            exit(0);
        }
        if (strcmp(arr_x, "determinantMatrix") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>c[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<determinantMatrix(c, rows1, columns1)<<endl;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            exit(0);
        }
        if (strcmp(arr_x, "matrixIsDiagonal") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>c[i][counter];
                }
                cout<<"next column"<<endl;
            }
            cout<<matrixIsDiagonal(c, rows1, columns1)<<endl;
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            exit(0);
        }
        //if (strcmp(arr_x, "swap") == 0){
        //
        //}
        //if (strcmp(arr_x, "sortRow") == 0){
        //
        //}
        if (strcmp(arr_x, "sortRowsInMatrix") == 0){
            cout<<"Enter single digits of the matrix by columns"<<endl;
            for(int counter = 0; counter < columns1; ++counter){
                for (int i = 0; i < rows1; ++i){
                    cin>>c[i][counter];
                }
                cout<<"next column"<<endl;
            }
            printDoubleMatrix(sortRowsInMatrix(c, rows1, columns1), rows1, columns1);
            for (int counter = 0; counter < rows1; ++counter){
                delete [] c[counter];
            }
            delete [] c;
            exit(0);
        }
    }
}