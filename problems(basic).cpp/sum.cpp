//header 
#include <iostream>

int main(){

    int N,sum;

    std::cout<<"Value of N ::"<< std::endl;
    std::cin>> N;

    std::cout<<"The output of the loop is ;;"<<std::endl;

    for ( int i{1}; i<=N; i++){
          sum+=i;               
      
            }
    std::cout<<sum<<std::endl;
    return 0;
}

