

#ifndef StackInter_hpp
#define StackInter_hpp

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

template <typename T> 
class StackInter{ //define a class StackI as an interface for the Subclass Stack in Stack.hpp.
public:
    virtual void push(T t) = 0;
    virtual void pop() = 0;
    virtual T top() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;
};

#endif /* StackInter_hpp */
