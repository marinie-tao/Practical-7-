
#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
#include <string>
#include <stdio.h>
#include "StackInter.hpp"

using namespace std;

template <typename T> //define template
class Stack: StackInter<T>{ //define a template class Stack based on an interface class StackInter
    
protected:
    int size; //declare an integer size: size of the stack
    int NumberOfElement; //delcare an integer Number of Elements in the Stack)
    int TopElementIdx; //declare an integer Top Element Index
    T a[]; //declare an array "a" of type T
public:
    Stack(){ //default constructor
        size = 20;
        NumberOfElement = 0;
        TopElementIdx = 0;
        T a[20];
    }
    Stack(int n){ //user-defined constructor
        size = n;
        NumberOfElement = 0;
        TopElementIdx = 0;
        T a[n];
    }
    
    void push(T t){ //define a method push that allows the user to add variables of type T to the array a, while respecting the LIFO method in the pop method.
        if(NumberOfElement == size){
            throw "FullStackException\n";
        }else{
            if(NumberOfElement >=0 and NumberOfElement < size){
                int i = NumberOfElement;
                if(NumberOfElement==0){
                    a[TopElementIdx] = t;
                    NumberOfElement++;
                }else if(NumberOfElement >=1){
                    while(i >=1){
                        a[i]=a[i-1];
                        i--;
                    }
                    a[TopElementIdx] = t;
                    NumberOfElement++;
                }
            }
        }
    }
    
    void pop(){ //define a method pop that allows the user to remove variables of type T from the array a, using the LIFO method
        if(NumberOfElement==0){
            throw "EmptyStackException\n";
            
        }else if(NumberOfElement==1){
            a[TopElementIdx] = 0;
        }
        else if(NumberOfElement>1){
            for(int i=0; i<=NumberOfElement; i++){
                a[i]=a[i+1];
            }
        }
        NumberOfElement--;
    }
    T top(){ //define a method top of type T that returns the top element in the stack
        if(NumberOfElement ==0){
            throw "EmptyStackException\n";
        }
        cout << "\n";
        return a[TopElementIdx];
    }
    
    void print(){ //define a method print to print the elements of the stack, with element at index 0 being the top
        if(NumberOfElement==0){
            cout << "The Stack is empty\n";
        }else{
            for(int i=0; i<NumberOfElement; i++){
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
    bool isEmpty(){ //define a method isEmpty to check whether the stack is empty or not
        if(NumberOfElement==0){
            return true;
        }else{
            return false;
            
        }
    }
};

#endif /* Stack_hpp */
