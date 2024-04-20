#include<iostream>


// !!!! Danger  ========= this must always be in ur mind , dont do this mistake 

int main(){

    int array[]={1,3,4,5,6};
    std::cout<<"Size of the array is :: "<< std::endl;    
    std::cout<< std::size(array)<<std::endl;

    array[100]=15; // Danger!!!! pointer to the unknown location is modified 
    std::cout<< array[100]<<std::endl;  // cpu will crash this output
    
    
    
    return 0;
}