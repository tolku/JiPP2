//
// Created by Olkuski T on 22/01/2022.
//

#ifndef CALENDAR_JULIAN_H
#define CALENDAR_JULIAN_H

#include "Calendar.h"

class Julian:public Calendar {
public:
    /** Shows information about Julian calendar
     * @param none
     * @return void
     */
    void info();

    /**
     * to be implemented
     */
    int check_for_events(int day, int year, int month);

    /**
     * to be implemented
     */
    void add_event();

    /**
    * to be implemented
    */
    void show_month(int day, int month, int year);

    /**
    * to be implemented
    */
    void which_month(int year, int month);

    /**
    * to be implemented
    */
    void del_event(int day, int month, int year);
};


#endif //CALENDAR_JULIAN_H
