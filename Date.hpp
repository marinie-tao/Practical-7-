#ifndef Date_hpp
#define Date_hpp

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

class Date{ //define a class Date
protected:
    int day, month, year; //declare 3 integers, day , month , year
public:
    Date(const int d1,const int m1,const int y1): day(d1), month(m1), year(y1){ //user-defined constructor
    }
    int getday(){ //define a getter to get the day of the result
        return day;
    }
    int getmonth(){ //define a getter to get the month of the result
        return month;
    }
    int getyear(){ //define a getter to get the year of the result
        return year;
    }
    void printDate(){ //define method to print the date of the result
        cout << day << "/" << month << "/" << year;
    }
};

#endif /* Date_hpp */
