//
// Created by Olkuski T on 22/01/2022.
//

#ifndef CALENDAR_DAY_H
#define CALENDAR_DAY_H

#include "Gregorian.h"
#include "Calendar.h"

class Day: public Gregorian{
private:
    int day;
    int month;
    int year;
public:
    int* rand_numbers;
public:
    /**
     * Created an object of type Day with specified parameters
     * @param day
     * @param month
     * @param year
     * @return Day
     */
    Day(int day, int month, int year);

    /**
     * Deallocated memory for variable
     */
    ~Day();

    /**
     *
     * @param day
     * @param month
     * @param year
     */
    void check_if_date_is_correct(int day, int month, int year);
    int get_day();
    int get_month();
    int get_year();
    void set_day(int day);
    void set_month(int month);
    void set_year(int year);
    void random_number_gen() const;
};


#endif //CALENDAR_DAY_H
