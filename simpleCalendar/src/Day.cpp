//
// Created by Olkuski T on 22/01/2022.
//

#include "../include/Day.h"
#include <iostream>
#include <time.h>

using namespace std;

Day::Day(int day, int month, int year) {
    srand(time(NULL));
    this -> day = day;
    this -> month = month;
    this -> year = year;
    rand_numbers = new int[10];
    for (int counter = 0; counter < 10; ++counter){
        rand_numbers[counter] = rand() % 10;
    }
}

Day::~Day() {
    delete[] rand_numbers;
}

int Day::get_day() {
    return day;
}

int Day::get_month() {
    return month;
}

int Day::get_year() {
    return year;
}

void Day::check_if_date_is_correct(int day, int month, int year) {
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1900){
        cout<<"Invalid date!"<<endl;
        exit(-1);
    }
    if (month == 2){
        if (year % 4 == 0 && day > 29){
            cout<<"Invalid date!"<<endl;
            exit(-1);
        }
    }
    if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
        if (day > 30){
            cout<<"Invalid date!"<<endl;
            exit(-1);
        }
    }
}

void Day::set_day(int day) {
    this -> day = day;
}

void Day::set_month(int month) {
    this -> month = month;
}

void Day::set_year(int year) {
    this -> year = year;
}

void Day::random_number_gen() const{
    cout<<"Numbers generated: ";
    for (int counter = 0; counter < 10; ++counter){
        cout<<rand_numbers[counter]<<", ";
    }
    cout<<"\n";
}