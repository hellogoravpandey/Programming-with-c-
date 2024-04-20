#include<iostream>

class Shape {

   public:

      //constructor 

      Shape()=default;
      Shape(std::string name ){
            this->name =name;
      }

   // access specifier 
    private:
       std::string name;

       
};
