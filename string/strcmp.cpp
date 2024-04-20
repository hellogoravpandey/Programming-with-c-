#include <iostream>
#include<cstring>
int main (){

    char name[]="Gourav Pandey";
    const char* name_ptr="Rohit Pandey";
    const char* name_2ptr="Meghna";
    char  name2[]="samraggi";

    // return 0 when equal 
    // return 1 when first string is after second 
    // return -1 when first string is before second 

   std::cout << std::strcmp(name,name2)<<std::endl;  // -1
   std::cout << std::strcmp(name,name_ptr)<<std::endl;  // -1
   std::cout << std::strcmp(name_2ptr,name_ptr)<<std::endl; // -1
   


    
     return 0;
}