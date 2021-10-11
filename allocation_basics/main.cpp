//
// Created by Tomek Olkuski on 11/10/2021.
//

#include <iostream>

using namespace std;

int main (int argc, char *argv[]){
    for (int counter = 0; counter < argc; ++counter){
        cout << argv[counter] << endl;
    }
    //stoi() do konwersji znakow na liczby, trzeba najpierw ją zaimplementowac z biblioteki string
    int *n;
    n = new int;
    int k;
    cout << n << endl << *n << endl << &n << endl << &k << endl;

    delete n;

    int *tab = new int [5];     //alokowanie miejsca dla tablicy 5cio elementowej

    delete[] tab;

    int **tab2 = new int*[5];
    for (int counter = 0; counter < 5; counter++){
        tab2[counter] = new int [5];
    }
    return 0;
}