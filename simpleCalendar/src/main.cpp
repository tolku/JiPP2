#include <iostream>
#include "../include/Day.h"
#include "../include/Julian.h"
using namespace std;

int main(int argc, char* argv[]){
    int event_exist;
    if (argc != 4){
        cout<<"Not enough parameters!"<<endl;
        Gregorian::help();
        exit(-1);
    }
    Calendar *base_pointer_to_greg, *base_pointer_to_jul;
    Julian jul;
    base_pointer_to_jul = &jul;
    Gregorian greg;
    base_pointer_to_greg = &greg;
    Day today(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    today.check_if_date_is_correct(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    //Calendar *obj = new Day((int)(size_t)(argv[1]), (int)(size_t)argv[2], (int)(size_t)argv[3]);
    cout<<"Today is "<<today.get_day()<<"."<<today.get_month()<<"."<<today.get_year()<<endl;
    event_exist = today.check_for_events(today.get_day(), today.get_year(), today.get_month());
    if (event_exist == 1){
        cout<<"TODAYS EVENTS:"<<endl;
        today.display_events(today.get_day(), today.get_month(), today.get_year());
    } else {
        cout<<"NO EVENTS TODAY!"<<endl;
    }
    today.show_month(today.get_day(), today.get_month(), today.get_year());
    int option = 0;
    while(option != 10){
        fflush(stdin);
        cout<<"\ntype a number to pick a option"<<endl;
        cout<<"1 - to display a different month"<<endl;
        cout<<"2 - to add an event"<<endl;
        cout<<"3 - to delete an event"<<endl;
        cout<<"4 - to display events for a different date"<<endl;
        cout<<"5 - to BE ADDED"<<endl;
        cout<<"6 - random 10 numbers generator"<<endl;
        cout<<"7 - to show info about Gregorian Calendar"<<endl;
        cout<<"8 - to show info about Julian Calendar"<<endl;
        cout<<"9 - help"<<endl;
        cout<<"10 - exit"<<endl;
        cin>>option;
        switch (option){
            case 1:
                int temporary;
                cout<<"type month: ";
                cin>>temporary;
                today.set_month(temporary);
                cout<<"type year: ";
                cin>>temporary;
                today.set_year(temporary);
                cout<<"\n";
                today.check_if_date_is_correct(today.get_day(), today.get_month(), today.get_year());
                today.show_month(today.get_day(), today.get_month(), today.get_year());
                break;
            case 2:
                today.add_event();
                break;
            case 3:
                int temp1;
                cout<<"type day: ";
                cin>>temp1;
                today.set_day(temp1);
                cout<<"type month: ";
                cin>>temp1;
                today.set_month(temp1);
                cout<<"type year: ";
                cin>>temp1;
                today.set_year(temp1);
                today.del_event(today.get_day(), today.get_month(), today.get_year());
                break;
            case 4:
                int temp;
                cout<<"type day: ";
                cin>>temp;
                today.set_day(temp);
                cout<<"type month: ";
                cin>>temp;
                today.set_month(temp);
                cout<<"type year: ";
                cin>>temp;
                today.set_year(temp);
                cout<<"TODAYS EVENTS:"<<endl;
                today.display_events(today.get_day(), today.get_month(), today.get_year());
                break;
            case 5:
                //to be developed
                break;
            case 6:
                today.random_number_gen();
                break;
            case 7:
                base_pointer_to_greg->info();
                break;
            case 8:
                base_pointer_to_jul->info();
                break;
            case 9:
                Gregorian::help();
                break;
            case 10:
                exit(1);
            default:
                cout<<"Not picked any number!"<<endl;
                break;
        }

    }
}