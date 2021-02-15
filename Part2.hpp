#ifndef Part2_hpp
#define Part2_hpp

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

template <typename T>
T mymax(T x, T y){
    return (x > y)? x:y;
}

template <typename C>

void Swap(C &n1, C &n2){
    
    C temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}





#endif /* Part2_h */
