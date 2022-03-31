//
// Created by retr0 on 3/30/22.
//
#include <iostream>
using namespace std;


#ifndef PRACTICA2_2_DATE_H
#define PRACTICA2_2_DATE_H


class Date {
private:
    int year;
    int month;
    int day;

public:
    //Constructors
    Date(){
        year = 2001;
        month = 05;
        day = 25;
    }

    Date(int year, int month, int day){
        this->year = year;
        this->month = month;
        this->day = day;
    }

    //Setters
    void setYear(int year){
        this->year = year;
    }

    void setMonth(int month){
        this->month = month;
    }

    void setDay(int day){
        this->day = day;
    }

    //Getters
    int getYear(){
        return year;
    }
    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }

    //Other methods
    void showDate(){
        cout << "Year: " << year << " Month: " << month << " Day: " << day << endl;
    }
};


#endif //PRACTICA2_2_DATE_H
