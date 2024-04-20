#include <iostream>
#include <fstream>

void write(int* a,int size){

    std::fstream binaryfile;
    binaryfile.open("binaryfile.dat",std::ios::out | std::ios::binary);
    
    if (binaryfile){
        binaryfile.write(reinterpret_cast<char*>(a),size*sizeof(int));
    }
    else {
         std::cout << "Error"<<std::endl;
    }
}

void read_file(int* a,int size){
    std::fstream binaryfile("binaryfile.dat",std::ios::in | std::ios::binary);
    if (binaryfile){
        binaryfile.read(reinterpret_cast<char*>(a),size*sizeof(a));

    }
    else {
        std::cout << "Error"<<std::endl;
    }
}


int main(int argc, char const *argv[])
{

   int array[]={0,1,2,3,4,5,6,7,8,9};
   int size=sizeof(array)/sizeof(array[0]); // 40bytes/4 =10 elements
   int read[size];
   write(array,size);
//    read(read);  // compiler confused here
   read_file(read,size);

    return 0;
}
