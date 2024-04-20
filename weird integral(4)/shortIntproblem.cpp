#include <iostream>
// weird behaviour by short 
// every arithmetical operation requires 4 bytes(why this happens )
// short implicitly converted to the int 

// char is also included 


int main (){

   short int var1 {4};
   short int var2{5};

    std::cout << sizeof(var1+ var2)<< std::endl;
    return 0;
}
