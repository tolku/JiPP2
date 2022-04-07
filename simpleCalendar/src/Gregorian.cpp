//
// Created by Olkuski T on 22/01/2022.
//

#include "../include/Gregorian.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <unistd.h>
#include <fcntl.h>

using namespace std;

int Gregorian::determine_day(int day, int year, int month) {
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

void Gregorian::info() {
    cout<<"The Gregorian calendar is the calendar used in most of the world."<<endl;
    cout<<"It was introduced in October 1582 by Pope Gregory XIII as a modification of, and replacement for, the Julian calendar."<<endl;
    cout<<"he principal change was to space leap years differently so as to make the average calendar year 365.2425 days long, more closely approximating the 365.2422-day 'tropical' or 'solar' year that is determined by the Earth's revolution around the Sun."<<endl;
}

void Gregorian::add_event() {
    int day, month, year;
    string event_text, s;
    char buffer[300];
    FILE *ptr = fopen("baza_danych.txt", "a+");
    cout << "ADDING AN EVENT" << endl << "Type the day ";
    cin >> day;
    cout << "type the month ";
    cin >> month;
    cout << "type the year ";
    cin >> year;
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1900) {
        cout << "Invalid date!" << endl;
        exit(-1);
    }
    if (month == 2) {
        if (year % 4 == 0 && day > 29) {
            cout << "Invalid date!" << endl;
            exit(-1);
        }
    }
    if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            cout << "Invalid date!" << endl;
            exit(-1);
        }
    }
    cout << "type the text of an event: " << endl;
    fflush(stdin);
    getline(cin, event_text);
    sprintf(buffer, "%d%d%d %s\n", day, month, year, event_text.c_str());
    if (fputs(buffer, ptr) == EOF) {
        cout << "error";
        exit(-1);
    }
    fclose(ptr);
    cout << "EVENT ADDED!" << endl;
}

void Gregorian::del_event(int day, int month, int year) {
    vector<int> good_event_int;
    vector<string> good_events;
    int fd;
    bool event_exist = false;
    string event;
    char single_event[500];
    int parsed_date, scanned_date;
    char to_parse[20];
    sprintf(to_parse, "%d%d%d", day, month, year);
    parsed_date = stoi(to_parse);
    FILE* wsk = fopen("baza_danych.txt", "r");
    while (1){
        if (feof(wsk) != 0){
            break;
        }
        fscanf(wsk, "%d", &scanned_date);
        fgets(single_event, 500, wsk);
        if (scanned_date == parsed_date){
            event_exist = true;
        } else {
            event = string(single_event);
            good_event_int.push_back(scanned_date);
            good_events.push_back(event);
        }
        memset(single_event, 0, 500);
        scanned_date = 0;
    }
    fclose(wsk);
    if (event_exist == false){
        cout<<"no events found to be deleted!"<<endl;
        return;
    }
    fd = open("baza_danych.txt", O_RDWR|O_TRUNC);
    close(fd);
    FILE* wsk1 = fopen("baza_danych.txt", "w");
    for (int counter = 0; counter < good_events.size() - 1; ++counter){
        string x = good_events.at(counter);
        fprintf(wsk1, "%d%s\n",good_event_int.at(counter), x.c_str());
    }
    fclose(wsk1);
    cout<<"Event deleted!"<<endl;
}

void Gregorian::show_month(int day, int month, int year) {
    FILE *ptr = fopen("baza_danych.txt", "r");
    cout << "You are looking at month: " << month << "." << year << endl;
    int starting_day = determine_day(1, year, month);
    if (starting_day == 0){
        starting_day = 7;
    }
    cout << "Mod" << "\t" << "Tue" << "\t" << "Wed" << "\t" << "Thu" << "\t" << "Fri" << "\t" << "Sat" << "\t" << "Sun"
         << endl;
    if (month == 2) {
        if (year % 4 == 0) {
            int sep = 1;
            for (int sec_counter = 1; sec_counter < starting_day; ++sec_counter) {
                cout << "   " << "\t";
            }
            for (int i = starting_day; i <= 7; ++i, ++sep) {
                if (check_for_events(sep, year, month) == 1){
                    cout << sep << "* " << "\t";
                } else {
                    cout << sep << "  " << "\t";
                }
            }
            cout << "\n";
            for (int counter = sep; counter <= 29; ++counter) {
                for (int i = 1; i <= 7; ++i, ++sep) {
                    if (check_for_events(sep, year, month) == 1){
                        cout << sep << "* " << "\t";
                    } else {
                        cout << sep << "  " << "\t";
                    }
                    if (sep == 29) {
                        cout << "\n";
                        return;
                    }
                }
                cout << "\n";
            }
            cout << "\n";
        } else {
            int sep = 1;
            for (int sec_counter = 1; sec_counter < starting_day; ++sec_counter) {
                cout << "   " << "\t";
            }
            for (int i = starting_day; i <= 7; ++i, ++sep) {
                if (check_for_events(sep, year, month) == 1){
                    cout << sep << "* " << "\t";
                } else {
                    cout << sep << "  " << "\t";
                }
            }
            cout << "\n";
            for (int counter = sep; counter < 28; ++counter) {
                for (int i = 1; i <= 7; ++i, ++sep) {
                    if (check_for_events(sep, year, month) == 1){
                        cout << sep << "* " << "\t";
                    } else {
                        cout << sep << "  " << "\t";
                    }
                    if (sep == 28) {
                        cout << "\n";
                        return;
                    }
                }
                cout << "\n";
            }
        }
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        int sep = 1;
        for (int sec_counter = 1; sec_counter < starting_day; ++sec_counter) {
            cout << "   " << "\t";
        }
        for (int i = starting_day; i <= 7; ++i, ++sep) {
            if (check_for_events(sep, year, month) == 1){
                cout << sep << "* " << "\t";
            } else {
                cout << sep << "  " << "\t";
            }
        }
        cout << "\n";
        for (int counter = sep; counter < 31; ++counter) {
            for (int i = 1; i <= 7; ++i, ++sep) {
                if (check_for_events(sep, year, month) == 1){
                    cout << sep << "* " << "\t";
                } else {
                    cout << sep << "  " << "\t";
                }
                if (sep == 31) {
                    cout << "\n";
                    return;
                }
            }
            cout << "\n";
        }
    } else {
        int sep = 1;
        for (int sec_counter = 1; sec_counter < starting_day; ++sec_counter) {
            cout << "   " << "\t";
        }
        for (int i = starting_day; i <= 7; ++i, ++sep) {
            if (check_for_events(sep, year, month) == 1){
                cout << sep << "* " << "\t";
            } else {
                cout << sep << "  " << "\t";
            }
        }
        cout << "\n";
        for (int counter = sep; counter < 30; ++counter) {
            for (int i = 1; i <= 7; ++i, ++sep) {
                if (check_for_events(sep, year, month) == 1){
                    cout << sep << "* " << "\t";
                } else {
                    cout << sep << "  " << "\t";
                }
                if (sep == 30) {
                    cout << "\n";
                    return;
                }
            }
            cout << "\n";
        }
    }
}

int Gregorian::check_for_events(int day, int year, int month) {
    bool event_exist = false;
    char to_parse[20];
    int date, parsed_date;
    char ret_val = 'c';
    FILE* wsk = fopen("baza_danych.txt", "r");
    sprintf(to_parse, "%d%d%d", day, month, year);
    parsed_date = stoi(to_parse);
    while (1) {
        fscanf(wsk, "%d", &date);
        while (1){
            ret_val = getc(wsk);
            if (ret_val == EOF){
                return (int)event_exist;
            }
            if(ret_val == '\n'){
                break;
            }
        }
        if (date == parsed_date){
            event_exist = true;
        }
    }
}

void Gregorian::help() {
    cout<<"\t\t\t\t\t\t\t\t\tBasic calendar application\n\n"<<endl;
    cout<<"to start the application correctly type: ./program <day> <month> <year> (which will be the todays date)in which the day is from 1 to 31, month from 1 to 12, year must be greater than 1900!"<<endl;
    cout<<"to pick a different option from menu, type its number in console"<<endl<<endl;
}

void Gregorian::display_events(int day, int month, int year) {
    vector<string> event_contents;
    string event;
    bool found_event = false;
    char single_event[500];
    int parsed_date, scanned_date;
    char to_parse[20];
    sprintf(to_parse, "%d%d%d", day, month, year);
    parsed_date = stoi(to_parse);
    FILE* wsk = fopen("baza_danych.txt", "r");
    while (1){
        if (feof(wsk) != 0){
            break;
        }
        fscanf(wsk, "%d", &scanned_date);
        fgets(single_event, 500, wsk);
        if (scanned_date == parsed_date) {
            found_event = true;
            event = string(single_event);
            event_contents.push_back(event);
        }
        memset(single_event, 0, 500);
        scanned_date = 0;
    }
    for (int counter = 0; counter < event_contents.size(); ++counter){
        cout<<event_contents.at(counter)<<endl;
    }
    if (found_event == false){
        cout<<"NO EVENTS FOR TODAY!"<<endl;
    }
}
