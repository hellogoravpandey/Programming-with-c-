#include <iostream>
#include <iomanip>


// main flow 
/*  
    1.Digit wise check for 1 and 0 simultaneously
*/

int main(){

    int N,no;
    bool res=true;
    std::cout<<"Enter the number ::"<<std::endl;
    std::cin>>N;

    no=N;

    while (no>0){

          int digit=no%10;

          if (digit==0 || digit==1){
            res= res&&true;
            no/=10;
          }     
          else{
            res=res&&false;
            break;
          }
    }


   // printing 
   std::cout<<std::boolalpha;
   std::cout << "is it a  binary number "<<std::setw(5)<<res<<std::endl;


    
    
    return 0;
}