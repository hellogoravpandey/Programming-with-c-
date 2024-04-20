#include <iostream >

int main (){
  
  try{int* ptr = new int[100000000000000000]; }
  catch(std::exception& ex ){
    
    std::cout << "something else not right "<< ex.what()<< std::endl;

  }



  // second way of handling 



  int* ptr1= new(std::nothrow) int[30000000000000000];
  if (ptr1!=nullptr){
    std::cout << "Nothing"<<std::endl;
  }

  else {
    std::cout << "Failed allocation"<< std::endl;
  }




  // due to limited heap memory 

  //handling this exception 

  


    return 0;
}