#include <iostream>

void print(void* numberPtr, char ch){

    switch(ch){
        case 'i':  std::cout<< *((int* )numberPtr)<< std::endl; break;
        case 'c': std::cout<< *((char*)numberPtr)<< std::endl; break;
    }

    // use void pointer carefully as compiler dont restrict u to perform all type of typecasting in void pointer  ----->>>>> run time error 


}
int main(){
      
      int a = 6 ; 
      char ch ='a';

      print(&a , 'i');

    return 0;
}