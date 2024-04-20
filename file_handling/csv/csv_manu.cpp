#include <iostream>
#include<fstream>



int main(int argc, char const *argv[])
{

   std::ofstream fout; 
   fout.open("sample.csv");

  if (fout){
    int n; 
    char name[60];  // compile time char array 
    int age,id;
    std::cout << "Enter th no of the rows of data:: ";
    std::cin>> n; 
    
    
    for ( int i =0;i<n ; i++){

    std::cout << "person no "<< i+1<<std::endl;
    std::cout << "Name of the user"<<std::endl;
    std::cin>> name;
    std::cout << "age of the user"<<std::endl;
    std::cin >> age;
    std::cout << "id of the user"<<std::endl;
    std::cin >>id;


    fout <<name<<",";
    fout <<age<<",";
    fout <<id<<std::endl;


    }

    fout.close();


  }



  else {

    std::cout << "Problem with opening of the files ";
  }
    return 0;
}

