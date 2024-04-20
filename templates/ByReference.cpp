#include <iostream>
using namespace std;


//important points 

// 1. reference variable passed to funct template  -----doesnt imply passed by reference 
// 2. therefore &T must be used 
//3. confirmed with gdb debugger ----

template <typename T> 
T maximum (T& a, T& b ){
    cout << "Addresses inside the maximum :: " <<endl;
     cout << &a<< endl;
     cout << &b<< endl;
    
    return (a>b)? a:b;

    
}

int main(int argc, char const *argv[])
{ 
    // int a=5;
    // int b=6;
    // int& ref_to_a =a; 
    // int& ref_to_b= b;


    //  maximum(ref_to_a, ref_to_a);  
    //  cout << "inside main Address:::  "<< endl;
    //  cout << &a<< endl;
    //  cout << &b<< endl;
     

     int a=5;
    int b=6;
    int& ref_to_a =a; 
    int& ref_to_b= b;


     maximum(a,b);  
     cout << "inside main Address:::  "<< endl;
     cout << &a<< endl;
     cout << &b<< endl;
     

    return 0;
}
