//
// Created by Tomek Olkuski on 24/10/2021.
// plik z kodem glownym

#include <iostream>
#include <string.h>
#include <calc.h>

using namespace std;

int main(int argc, char* argv[]){
    if (strcmp(argv[1], "add") == 0){
        if (argc != 4){
            cout<<"wrong parameters"<<endl;
            return -1;
        }
        cout<<add(atof(argv[2]), atof(argv[3]))<<endl;
        return 0;
    }
    if (strcmp(argv[1], "substract") == 0){
        if (argc != 4){
            cout<<"wrong parameters"<<endl;
            return -1;
        }
        cout<<substract(atof(argv[2]), atof(argv[3]))<<endl;
        return 0;
    }
    if (strcmp(argv[1], "volume") == 0){
        if (argc != 6){
            cout<<"wrong parameters"<<endl;
            return -1;
        }
        cout<<volume(atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]))<<endl;
        return 0;
    }
    if (strcmp(argv[1], "help") == 0){
        help();
        return 0;
    }
    cout<<"wrong name of function"<<endl;
}

