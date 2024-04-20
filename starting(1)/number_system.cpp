#include <iostream>

int main(){

    int number1{15}; // decimal
    int number2{017}; // octal  8 + 7 =15
    int number3 {0xf}; // hexadecimal f=15
    int number4 {0b1111};   // binary 1111=15
    
    std::cout<< "decimal ::"<< number1 << std::endl;
    std::cout<< "octal ::"<< number2 << std::endl;
    std::cout<< "hexadecimal::"<< number3 << std::endl;
    std::cout<< "binary::"<< number4<< std::endl;
    


    return 0;

    



}
