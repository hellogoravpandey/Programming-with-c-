#include <iostream>


int add (int a, int b){

  return (a+b);
}


int main()
{
  int a{3}; // input way 
  int sum=add(3,4);
  std::cout<< "Value of a is :"<<a<<std::endl;
  
  std::cout<< "Hello World" <<std::endl;
  std::cout<< sum <<std::endl;
  
  

    return 0;

}

// int add (int a, int b){

//   return (a+b);
// }