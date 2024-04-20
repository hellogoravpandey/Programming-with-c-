#include <iostream>

int main  (){

    int var1{6};
    int var2{8};
    int& ref_var{var1};

    std::cout << "Addresses _________________________"<< std::endl;
    std::cout << "&var1===" << &var1 << "and" << "&ref_var=="<< &ref_var<<std::endl;

    // redeclare ref_Var

    ref_var=var2;

    std::cout << "Address after redeclaration -----------------"<< std::endl;

    std::cout << "&var1===" << &var1 << "and" << "&ref_var=="<< &ref_var<<std::endl;
    std::cout << "Value of var1=="<< var1 << "Value of ref_var"<<ref_var<<std::endl;




    return 0;
}