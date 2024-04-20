#include <iostream>
#include <bitset>
//approach 

// removing most significant  and get empty space shifting all to left  then

// placing most significant to the least significnat postion


std::bitset<8>  bit_rotation(std::bitset<8> bit){

      unsigned int temp =bit[7];
      int i =7;
      while ( i>0){

       bit[i]=bit[i-1];

       i--;        

       }

       bit[0]=temp;s


     
     return bit;
    }
    

int main(int argc, char const *argv[])
{


 std::cout << bit_rotation(0b10101011) << std::endl;
 
    
    return 0;
}
