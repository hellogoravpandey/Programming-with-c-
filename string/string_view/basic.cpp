#include <iostream>
#include <string_view>
#include <string>
int main()



// string_view waas introduced in c++17  
// to overcome the cost of initialization in std::string 
//best usecase :::   when u want memory efficient read only string use std::string_view
{
    const char* str="gourav pandey";  // cant change str[0]=
    std::string_view str1=str;
   
   std::string str2=str;
   str2[0]='e';

   std::cout << &str << "  " << &(str1[0]) << " " << &str2[0] << std::endl;

   std::cout << str << " "<<str1 << " "<< str2 << std::endl;
    

}
  


