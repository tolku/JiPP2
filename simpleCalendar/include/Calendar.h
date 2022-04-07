//
// Created by Olkuski T on 22/01/2022.
//

#ifndef CALENDAR_CALENDAR_H
#define CALENDAR_CALENDAR_H


class Calendar {
public:

    /** Adds an event to the file baza_danych.txt
     * @param none
     * @return void
     */
    virtual void add_event()= 0;

    /** Deletes an event to the file baza_danych.txt
     * @param int day
     * @param int month
     * @param int year
     * @return void
     */
    virtual void del_event(int day, int month, int year) = 0;

    /**
     * Shows a month from the calendar
     * @param day
     * @param month
     * @param year
     * @return void
     */
    virtual void show_month(int day, int month, int year)= 0;

    /**
     * Checks if event at specified date exist in baza_danych.txt
     * @param day
     * @param year
     * @param month
     * @return int
     */
    virtual int check_for_events(int day, int year, int month) = 0;

    /**
     * Shows information about the calendar
     * @param none
     * @return void
     */
    virtual void info() = 0;

};


#endif //CALENDAR_CALENDAR_H
