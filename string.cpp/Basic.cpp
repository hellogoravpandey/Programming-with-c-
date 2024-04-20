#include <iostream>  //header 

int main(){
    // const char* must come 
    const char* arrayptr="Gourav Pandey"; 

    // arrayptr++;  // this is allowed   (read only )
    //no mofification is allowed 

    std::cout << *(arrayptr+1) << std::endl;
       

    char name[]="Gourav Pandey"; // { 'g',..... '\o'}

    std::cout << "Address of the name::  " << &name << std::endl;
    std::cout << "Address of the arrayptr:: "<< &arrayptr <<std::endl;

    // both have different addresses 

    std::string string(name);
    char ch=*(name);  // name is a pointer
    std::cout << ch<< std::endl;
    std::cout << string << std::endl;
      
    return 0;
}