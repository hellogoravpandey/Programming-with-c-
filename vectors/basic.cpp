// clearing the basic of dynamic memory allocation

#include <iostream>


int main(int argc, char const *argv[])
{
    int* dynamicArray = (int*) malloc(5 * sizeof(int));
    for ( int i =0 ; i< 5; i++){

        int n ; 
        std::cout << "Enter the "<< i+1 << "element :: " << std::endl;
        std::cin>>n;
        dynamicArray[i]=n;
    }

    dynamicArray = (int*) realloc(dynamicArray, 10 * sizeof(int));
     for ( int i =0 ; i< 10; i++){

        std::cout << (*(dynamicArray+i)) << std::endl;
    }
    return 0;
}
