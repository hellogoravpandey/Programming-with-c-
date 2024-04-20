#include <iostream>
#include <string>

class Person{
   public: 
      // constructor 
      Person()=default;
      Person(std::string name, std::string last_name, int age );
      

      //setter

      void set_name(std::string name ){
        this->name=name;   // compiler will be confused in case of name = name 
      }


  private:    
      std::string name; 
      std::string last_name; 
      int age; 

};

int main(int argc, char const *argv[])
{
    // std::string  name ;
    // std::string name1="Gourav Pandeysdkjfsdfjfjsdfsdkfksdfjsdfdsjfsjfjsdfjsdkfsdfjsdfsdkfsdkfsdfsdfksdfsdfdsfsdjfk";
    // std::string name2= "Rohit Pandey";
    
    // std::cout << "sizeof(name2)== "<< sizeof(name2)<<std::endl;
    // std::cout << "sizeof(name1)== "<< sizeof(name1)<<std::endl;

    // std::cout << "sizeof(name)== "<< sizeof(name)<<std::endl;



    return 0;
    
}
