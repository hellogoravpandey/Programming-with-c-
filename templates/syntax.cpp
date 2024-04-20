#include<iostream>

// function template .............>> its a blueprint of function 
// 1. helps to prevent memory wastage in case of function overloading 

template <typename T>// T kind of int , double , float .therfore gap between t and a 
T max ( T a , T b){  
    return (a>b)? a:b;
}

int main(int argc, char const *argv[])
{
    // call

    std::cout << max ( 1.1,2.4) << "return in "<< sizeof(max(1.4,2.8));

    return 0;
}
