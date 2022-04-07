//
// Created by Olkuski T on 22/01/2022.
//

#ifndef CALENDAR_GREGORIAN_H
#define CALENDAR_GREGORIAN_H


#include "Calendar.h"

class Gregorian:public Calendar {
public:
    /**
     * Shows information about Gregorian calendar
     * @param none
     * @return void
     */
    void info();

    /**
     * Adds an entry to the baza_danych.txt
     * @param none
     * @return void
     */
    void add_event() override;

    /**
     * Deletes an entry from baza_danych.txt
     * @param day
     * @param month
     * @param year
     */
    void del_event(int day, int month, int year);

    /**
     * Prints calendar for specified month in the console
     * @param day
     * @param month
     * @param year
     */
    void show_month(int day, int month, int year);

    /**
     * Check for entry with the same values in baza_danych.txt
     * @param day
     * @param year
     * @param month
     * @return void
     */
    int check_for_events(int day, int year, int month);

    /**
     * Checks when is the first day of the specified month
     * @param day
     * @param year
     * @param month
     * @return int
     */
    int determine_day(int day, int year, int month);

    /**
     * Prints help
     * @param none
     * @return void
     */
    static void help();

    /**
     * Shows whether there are events at specified date
     * @param day
     * @param month
     * @param year
     * @return void
     */
    void display_events(int day, int month, int year);
};


#endif //CALENDAR_GREGORIAN_H
