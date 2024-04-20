#include <iostream>
#include <typeinfo>
int main(){
   
    auto func=[](){
           std::cout<< "Hello world"<<std::endl;
           
    };

    func();
    std::cout << sizeof(func)<<std::endl;
    std::cout <<typeid(func).name()<<std::endl;
    return 0;
}