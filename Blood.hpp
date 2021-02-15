#ifndef Blood_hpp
#define Blood_hpp

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

#include "Date.hpp"

using namespace std;

class Blood{ //define a class Blood
protected:
    int sys, dias; //declare 2 integer attributes, Systolic "sys" and Diastolic "dias"
    Date date; //declare an class Date object as an attribute
public:
    Blood(int sys1, int dias1, const Date date): sys(sys1), dias(dias1), date(date){ //a user-defined constructor
    }
    int getSys(){ //define a getter of Systolic
        return sys;
    }
    int getDias(){ //define a getter of Diastolic
        return dias;
    }
    void print(){ //define a method to print out the results and the date of the results
        cout << "Systolic: " << sys << ", Diastolic: " << dias << ", Date: " << date.getday() << "/" << date.getmonth() << "/" << date.getyear() << endl;
    }   
};
#endif /* Blood_hpp */
