//
// Created by retr0 on 3/30/22.
//
#include <iostream>
#include <utility>
#include "Date.h"
using namespace std;

#ifndef PRACTICA2_2_COMPACTDISK_H
#define PRACTICA2_2_COMPACTDISK_H


class CompactDisk {
private:
    string title;
    string artist;
    int numberOfSongs;
    float price;
    Date date;

public:
    //Constructors
    CompactDisk(){
        title = "Unknown";
        artist = "Unknown";
        numberOfSongs = 0;
        price = 0;
    }
    CompactDisk(string title, string artist, int numberOfSongs, float price){
        this->title = std::move(title);
        this->artist = std::move(artist);
        this->numberOfSongs = numberOfSongs;
        this->price = price;
    }

    //Setters
    void setTitle(string title){
        this->title = title;
    }
    void setArtist(string artist){
        this->artist = artist;
    }
    void setNumberOfSongs(int numberOfSongs){
        this->numberOfSongs = numberOfSongs;
    }
    void setPrice(float price){
        this->price = price;
    }

    //Getters
    string getTitle(){
        return title;
    }
    string getArtist(){
        return artist;
    }
    int getNumberOfSongs(){
        return numberOfSongs;
    }
    float getPrice(){
        return price;
    }

    //Other Methods
    void obtainData(){
        int y,m,d;
        fflush(stdin);
        cout << "Type in the Title: \n>> ";
        getline(cin >> ws, title);
        cout << "Type in the Artist: \n>> ";
        getline(cin, artist);
        cout << "Type in the Number of songs: \n>> ";
        cin >> numberOfSongs;
        cout << "Type in the Price: \n>> ";
        cin >> price;
        cout << "Type in the Year: \n>> ";
        cin >> y;
        cout << "Type in the Month: \n>> ";
        cin >> m;
        cout << "Type in the Day: \n>> ";
        cin >> d;

        date.setYear(y);
        date.setMonth(m);
        date.setDay(d);
    }

    void printData(){
        cout << "The title of the album is: " << title << endl;
        cout << "The name of artist is: " << artist << endl;
        cout << "The number of songs this album has: " << numberOfSongs << endl;
        cout << "The year it was released is: " << date.getYear() << endl;
        cout << "The month it was released is: " << date.getMonth() << endl;
        cout << "The day it was released is: " << date.getDay() << endl;
        cout << "The price of the album is: " << price << endl;
    }

    float discount(){
        return price - price*.25;
    }

};


#endif //PRACTICA2_2_COMPACTDISK_H
