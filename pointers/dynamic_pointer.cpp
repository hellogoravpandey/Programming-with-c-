#include <iostream>

int main (){

      // uninitialized one.....
// scope 
      {
          int* ptr=new int(2); 

      }

      std::cout << *ptr << std::endl;
    
     delete ptr ; 
     ptr =nullptr ; 

     std:: cout << ptr << std::endl;   // memory location null (0)

// 
    return 0;
}