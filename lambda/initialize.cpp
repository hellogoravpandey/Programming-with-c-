#include <iostream>

int main(){
    // lambda function ========>> Anonymous function 
    int a=6;
    int b=7;
    int c=8;

    [](int a,int b){
        std::cout << "Sum of a and b is :: "<< (a+b)<<  std::endl;
        return (a+b);
    }(a,b);    // ;  before return 
    

    
    return 0;
}