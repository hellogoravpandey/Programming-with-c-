#include <iostream>

 // when u resize a array it copies the elements to the new larger size array 

int main(int argc, char const *argv[])
{
    int choice;
    std::cout << "enter the no of elements"<<std::endl;
    std::cin>>choice;

    int* ptr=(int*)malloc(choice*sizeof(int));
    std::cout << "memory address before reallocation "<< ptr << std::endl; 
    
    //reallocation 
    ptr= (int*)realloc(ptr,20*sizeof(int));
    std::cout << "memory address after reallocation "<< ptr << std::endl; 
    
    return 0;
}


