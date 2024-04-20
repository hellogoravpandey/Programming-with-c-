#include<iostream>
#include "operation.h"
#include "opp.cpp"   
 // DOnt know why linker unable to find the opp.c .............>>>solution is to include it .


int main(){
std::cout << "result::  "<< increment(4,5)<<std::endl;    
    return 0;
}