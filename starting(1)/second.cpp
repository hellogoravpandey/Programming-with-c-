#include<iostream>
#include <string>

int main(){
    int age;
    std::string name;
    std::cout<<"Name and the age::  "<<std::endl;
    std::getline(std::cin,name);
    std::cin>>age;
    std::cout<<"I am " << name<< " and my age is "<< age << std::endl;  
    
    return 0;
}
