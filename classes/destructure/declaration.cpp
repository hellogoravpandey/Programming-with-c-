#include <iostream>
#include <string_view>

class Dog{
    
    public:
        Dog()=default; // same as Dog(){}
        Dog(std::string_view input_name , std::string_view input_breed ,int age);
        ~Dog();
   private:
   //memeber variable
       std::string_view name; 
       std::string_view breed ;
       int* ptr_age{nullptr};
};

    Dog::Dog(std::string_view input_name , std::string_view input_breed ,int age){
         name=input_name;
         breed=input_breed;
         ptr_age=new int;  // 4 bytes allocation in the heap  declaration
         *ptr_age=age;     // assign the value (initialization)
    }
    Dog::~Dog(){

        delete ptr_age;
        std::cout << " deconstructor done"<< std::endl; 
        
    }


void test(){
    Dog dog1("Roni","German Shepard",10);
}

void test2(){
    // in this case deconstructor is automatically called 
    Dog* dog2=new Dog("Mercy","Labradaur",8);

    delete dog2;
}

int main(int argc, char const *argv[])
{
    test();
    test2();
    
    /* code */
    return 0;
}
