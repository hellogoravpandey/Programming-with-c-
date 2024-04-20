#include <iostream >


int main ( ){


int size ;
std::cout << "Enter the size of the arrray :"<< std::endl;
std::cin >> size ;

int* array = new int[size];
std::cout << array<< std::endl;

for ( int i {0}; i<size ; i++){
    std::cout << "array["<< i<< "]"<<std::endl;
    std::cin >> array[i];
}


std::cout << "Elements of the arrays are :::"<<std::endl;
for ( int i {0}; i<size ; i++){
    std::cout << "array["<< i<< "] =="<<array[i]<<std::endl;
}



// free the dynamic allocated  heap array 
std::cout << array<<std::endl;
delete[]array;



// sometimes accessing the same location otherwise different location ----->> problem 
// NULL =====solution 
array= NULL;
std::cout << array;
for ( int i {0}; i<size ; i++){
    std::cout << "array["<< i<< "] =="<<array[i]<<std::endl;
}


    return 0;
}