
#ifndef Patient_hpp
#define Patient_hpp

#include <iostream>
#include <string>
#include "Blood.hpp"
#include "Date.hpp"

using namespace std;

class Patient{ //define a class Patient
protected:
    string name; //declare a string attribute
    vector <Blood> vect; //declare a vector "vec" that will assigned with Blood class objects
public:
    Patient(string n1): name(n1){ //user-defined constructor
    }
    void setData(Blood tableRow ){ //define a method setData that takes an Object "TableRow" of class Blood as an argument and push the result into the vector "vect"
        this -> vect.push_back(tableRow);
    }
    void print(){ //define a method print that prints the name of the patient with the results of the blood tests
        cout << endl; 
        cout << "Patient: " << this -> name << "\n" << endl;
        for(int i =0; i < this -> vect.size(); i++){
            vect[i].print();
        }
    }
    

    //Ex1_Q2:define a method printReport that prints: 
    //1. if all systolic values were below 140, “no measurement was too high”;
    //2. The average diastolic blood pressure;
    //3. the list (possibly containing a single element) of maximal pressure records for a patient.

    void printReport(){ 
        
        cout << endl; 
        cout << "Patient: " << this -> name << "\n"  << endl;
        vector <Blood> high_blood; //declare a vector "high_blood" that takes objects of class Blood
        
        
        int max = 140; //declare an integer max
        double avg_dias = 0.0; //declare a double avg_diag to be assgined with the average Diastolic data
        
        
        for(int i =0; i < this -> vect.size(); i++){ //A for loop to add the diastolic data of every patient once the method printReport is called
            avg_dias += vect[i].getDias();
        }
    

        //for loop to check if the Systolic data of each patient is higher the max(140)
        for(int i =0; i < this -> vect.size(); i++){ 
                if(vect[i].getSys()>max){
                    high_blood.clear();
                    high_blood.push_back(vect[i]);
                    max = vect[i].getSys();
                }else if(vect[i].getSys()==max){
                    high_blood.push_back(vect[i]);
                }
            }
 
        
        if(high_blood.size()==0){ // displays "No measure is too high_blood if the high_blood vector size is 0
            cout << "No measurement is too high\n";
        }else{ //other wise it will display the data in the high vector
            cout << "Highest abnormal systolic blood pressure: \n";
            for(int i=0; i < high_blood.size(); i++){
                high_blood[i].print();
            }
        }
        cout << "Average diastolic: " << avg_dias/vect.size() << endl; //display the average diastolic data of the patient once the method printReport() is called
    }
};


#endif /* Patient_hpp */
