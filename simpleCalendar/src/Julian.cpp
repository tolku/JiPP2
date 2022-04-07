//
// Created by Olkuski T on 22/01/2022.
//

#include "../include/Julian.h"
#include <iostream>

using namespace std;

void Julian::info() {
    cout<<"The Julian calendar, proposed by Julius Caesar in AUC 708 (46 BC), was a reform of the Roman calendar."<<endl;
    cout<<"It took effect on 1 January AUC 709 (45 BC), by edict."<<endl;
    cout<<"It was designed with the aid of Greek mathematicians and astronomers such as Sosigenes of Alexandria."<<endl;
    cout<<"The calendar became the predominant calendar in the Roman Empire and subsequently most of the Western world for more than 1,600 years until 1582,"<<endl;
    cout<<"when Pope Gregory XIII promulgated a minor modification to reduce the average length of the year from 365.25 days to 365.2425 days and thus corrected the Julian calendar's drift against the solar year."<<endl;
    cout<<" Worldwide adoption of this revised calendar, which became known as the Gregorian calendar, took place over the subsequent centuries, first in Catholic countries and subsequently in Protestant countries of the Western Christian world."<<endl;
}

int Julian::check_for_events(int day, int year, int month) {
    cout<<"to be added"<<endl;
}

void Julian::add_event() {
    cout<<"to be added"<<endl;
}

void Julian::show_month(int day, int month, int year) {
    cout<<"to be added"<<endl;
}

void Julian::which_month(int year, int month) {
    cout<<"to be added"<<endl;
}

void Julian::del_event(int day, int month, int year) {
    cout<<"to be added"<<endl;
}