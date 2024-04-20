#include <iostream>
#include <bitset>


int main(int argc, char const *argv[])
{
    std::bitset<8> bits=0b0000'1111; //  8 bits
    bits.set(7); // indexing    0 to 7

    std::cout << bits << std::endl;
    return 0;
}
