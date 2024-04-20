#include <iostream>
/*

remember this that array are always passed as a reference ....in the c++




*/


void modify_array(int array[]){
    array[0]=5;
    array[1]=6;
}
int main(int argc, char const *argv[])
{

    int array[]={1,2,3,4,5,6,7};
    modify_array(array);
    
    //output
    int size = sizeof(array)/sizeof(array[0]);
    for ( int i=0 ; i<size; i++){
        std::cout << array[i]<< std::endl;
    }
    return 0;
}
