#include<iostream>
#include <cstring>
int main (){

    char name[]="Gourav Pandey";
    const char* name_ptr="Rohit Pandey";

    std::cout << std::strlen(name)<<std::endl;
    std::cout << std::strlen(name_ptr)<<std::endl;  // takes pointer and size witout whitespaces and \0
    std::cout << std::strlen(name)<<std::endl;  // takes pointer 
    std::cout << std::size(name)<<std::endl;  // takes array 
    
    

    return 0;
}