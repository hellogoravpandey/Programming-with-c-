#include<iostream>
#include<iomanip>

int main (){

   float number0;
   float number1{1.23456789f}; // 8 precision + 12 garbage
   float no{};
   int  no1{};
   int new_number{};
   double no2{};
   float number2{1.24567891234};// 12 precision + 8 garbage 
   double number3{1.2345678956789}; // 13 precision + 7 garbage 
   long double number4{1.23456789123456789123456000l};// 20 precision 
  
// Max_precesion(output) == 6 
   std::cout<<std::setprecision(20);
   std::cout<<"number1::"<<number1<<std::endl;
   std::cout<<"number2::"<<number2<<std::endl;
   std::cout<<"number3::"<<number3<<std::endl;
   std::cout<<"number4::"<<number4<<std::endl;

   std::cout<<"Enter the input value"<<std::endl;
//    std::cin>>number0;
//    std::cout<< "u entered ::"<<number0<<std::endl;

   //    dividing by 0 

   std::cout<<number1<< "/"<<no <<"==" << number1/no<<std::endl;
   std::cout<<number1<< "/"<<no1 <<"==" << number1/no1<<std::endl;
   std::cout<<number1<< "/"<<no2 <<"==" << number1/no2<<std::endl;
   std::cout<<no1<< "/"<<no2 <<"==" << no1/no2<<std::endl;
   std::cout<<no<< "/"<<no2 <<"==" << no/no2<<std::endl;
   std::cout<<number1<< "/"<<no2 <<"==" << number1/no2<<std::endl;





    return 0;
}