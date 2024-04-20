#include <iostream>
#include<typeinfo>

int main() {
    int number =65;

    // Reinterpret the memory address of an integer as a pointer to a character
    char* characterPtr=reinterpret_cast<char*>(&number);
    std::cout << typeid(number).name()<< std::endl; 
    std::cout << typeid(characterPtr).name()<< sizeof(characterPtr)<<std::endl;
    std::cout << &number << std::endl;
    std::cout <<characterPtr<< std::endl;


    return 0;
}
