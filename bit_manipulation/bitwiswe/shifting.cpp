#include <iostream>
#include <bitset>
int main(int argc, char const *argv[])
{
    std::bitset<8> bit = 0b1;
    std::cout << bit[0] << std::endl;
    return 0;
}
