#include <iostream>

int main(){

    int N, no,sum{0};

    std::cout<<"value of n:: "<<std::endl;
    std::cin>>N;
    no=N;

    while ( no>0){
         
         sum+=no%10;
         no/=10;

    }  

    std::cout<<"Sum of the digits of the "<< N << "is ::"<<sum<<std::endl;
    
    return 0;
    
}