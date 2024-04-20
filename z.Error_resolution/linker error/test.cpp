
#include <iostream>
#include "test1.cpp"  // this is the solution to the linker issue that ur facing ....

void log (const char* messsage);

void multiply (int a, int b){

    // log ("Multiply");
}

int main(){

    multiply(6,2);
}