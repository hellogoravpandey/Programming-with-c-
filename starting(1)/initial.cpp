#include <iostream>

int main()
{
    //braced initialization 
           
    int a {1};    
    int b{2};

    // int b{2.66}    error in braced initi(best to use for initialization)

    // functional initialization 

    int c (4);
    int d (4.9);

    // Assignment initialization 


    int e=7;
    int f=8.9;



    std::cout<<"the value of a "<< a << std::endl;
    std::cout<<"the value of b "<< b << std::endl;
    std::cout<<"the value of c "<< c << std::endl;
    std::cout<<"the value of d "<< d << std::endl;
    std::cout<<"the value of e "<< e  << std::endl;
    std::cout<<"the value of f "<< f << std::endl;
      
    return 0;
}