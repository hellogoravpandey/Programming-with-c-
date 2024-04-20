#include <iostream>
#include <fstream> // fstream is library and it has fstrem class in it 


int main(int argc, char const *argv[])
{

    unsigned short number=16787;

    std::fstream binaryfile; 
    std::fstream textfile;
    textfile.open("sample.txt",std::ios::out);
    binaryfile.open("sample.dat", std::ios::out | std::ios::binary);
    
    if ( !binaryfile){
        std::cout << "Error"<< std::endl;
    }
    else {
        
         char x='A';
         char y='B';
        //  binaryfile.write(&x,sizeof(x));  
        //  binaryfile.write(&y,sizeof(y));  
         binaryfile.write(reinterpret_cast<char*>(&number),sizeof(number));  
 

         
    }

    if (!textfile){
        std::cout<<"Error "<<std::endl;

        
        }


    else {

        textfile<<number<<std::endl;
    }
    return 0;
    
}
