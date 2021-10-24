//
// Created by Tomek Olkuski on 24/10/2021.
// plik z cialami funkcji

#include <iostream>

using namespace std;

float add(float x, float y){
    return x + y;
}

float substract(float x, float y){
    return x - y;
}

float volume (float a, float b, float h, float H){
    return ((a + b) * 1./2 * h) * H;
}

void help(){
    cout<<"Simple calculator"<<endl<<"Dzialania:"<<endl<<endl<<"add [a] [b]"<<endl<<"Dodawanie dwoch liczb [a] i [b]"<<endl<<endl<<"substract [a] [b]"<<endl<<"Odejmowanie dwoch liczb [a] [b]"<<endl<<endl<<"volume [a] [b] [h] [H]"<<endl<<"Obliczanie objetosci graniastoslupa prostego o podstawie trapezu"<<endl<<endl<<"help"<<endl<<"Wyswietlenie dokumentacji"<<endl<<endl;
}