#include <iostream>

int main(){

    int var1=6;
    int& ref_var1{var1};  // initialization and declaration in one statement 
    // differnet names to a same location and modification is also possible
    
    std::cout << "Before assignment :: value of var1::"<< var1<<std::endl;
    std::cout << "Before assignment :: value of ref_var1"<< ref_var1<<std::endl;
    ref_var1=9;
    std::cout << "After  assignment "<< var1<<std::endl;
    std::cout << "Before assignment "<<ref_var1<<std::endl;
    
    

    return 0;
}