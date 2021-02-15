#include <iostream>
#include "Date.hpp"
#include "Blood.hpp"
#include "Patient.hpp"
#include "Part2.hpp"
#include "Stack.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    //Exercise1 - A system for blood pressure records
    Patient mary("Mary");
    Patient john("John");
    
    mary.setData(Blood(94,61, Date(2,5,2013)));
    mary.setData(Blood(97,65, Date(3,5,2013)));
    mary.setData(Blood(144,99, Date(4,5,2013)));
    mary.setData(Blood(123,88, Date(5,5,2013)));
    mary.setData(Blood(177,110, Date(6,5,2013)));
    mary.setData(Blood(145,89, Date(7,5,2013)));
    
    john.setData(Blood(88,57, Date(15,5,2013)));
    john.setData(Blood(95,61, Date(16,5,2013)));
    john.setData(Blood(114,80, Date(17,5,2013)));
    john.setData(Blood(151,96, Date(18,5,2013)));
    john.setData(Blood(176,104, Date(19,5,2013)));
    john.setData(Blood(176,110, Date(20,5,2013)));
    
    mary.printReport();
    john.printReport();
    
    cout << "\n";


    //Exercise 2 -  A generic finite-size stack
    Stack<int> a = Stack <int> (3); //initialize a stack object of type integer and a user defined size of 3
    
    try{ //try to push 2, 3, 4, 5 to the stack.(only 2,3,4 and 5 --> FullStackExeception) bc size 3
        a.push(2);
        a.push(3);
        a.push(4);
        a.push(5);
    }catch(const char* msg){
        cerr << msg << endl;
    }
    
    a.print(); //calling the method print of the stack a
    cout << "\n";
    cout << a.isEmpty(); //calling the isEmpty method to check if the stack is empty or not
    cout << endl;
    
    try{ 
        cout << a.top();
        cout << endl;
    }catch(const char* msg){
        cerr << msg << endl;
    }
    
    try{
        a.pop(); 
    }catch(const char* msg){
        cerr << msg << endl;
    }
    try{ 
        cout << a.top();
        cout << endl;
    }catch(const char* msg){
        cerr << msg << endl;
    }
    try{
        a.pop(); 
    }catch(const char* msg){
        cerr << msg << endl;
    }
    try{ 
        cout << a.top();
        cout << endl;
    }catch(const char* msg){
        cerr << msg << endl;
    }
    try{
        a.pop(); 
    }catch(const char* msg){
        cerr << msg << endl;
    }
    
    try{ 
        cout << a.top();
        cout << endl;
    }catch(const char* msg){
        cout << endl;
        cerr << msg << endl;
    }

    try{
        a.pop();
    }catch(const char* msg){
        cerr << msg << endl;
    }
    
    a.print(); 
    cout << "\n";
    cout << a.isEmpty(); 
    cout << endl;
    
    return 0;
 
}
    
    


