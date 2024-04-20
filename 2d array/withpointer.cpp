#include <iostream>
//pointer
// it is must to tell the compiler ----no of columns
// reason   compiler allocate step by step , dont aware about the total size of the array itself 
void func(int(*array)[4]){   
    std::cout << "we are done with it "<< std::endl;
    std::cout<< array<<std::endl;

}

//copy 
void func1( int array[][4]){
    std::cout << "func1 is done with it "<< std::endl;
    std::cout<< array<<std::endl;
    array[0][0]=7;

}

//reference
void func2(int (&array)[][4]){
    std::cout << "func2 is done with it"<<std::endl;
    std::cout<< array<<std::endl;
}

int main(int argc, char const *argv[])
{
    int array[4][4]={0}; // 2d array
    std::cout << "sizeof(array)"<< sizeof(array)<<std::endl; // 4*4*4=64
    std::cout << array<<std::endl;
    std::cout << *(array)<<std::endl; // array point to the first element of the array

    func(array);
    func1(array);
    std::cout<<array[0][0]<<std::endl;
    func2(array);

     int a=3;
     int& b=a;

    return 0;
}
