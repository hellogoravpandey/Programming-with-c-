#include <bitset>
#include <iostream>

// h/t to reader Chris for this solution
std::bitset<4> rotl(std::bitset<4> bits)
{
     
     // concrpt   shifiting to the left in each case removes the most signifinact onw 
     // shifting to right remoes th most signigicant one 

     return (  (bits<<1  ) |  (bits>>3));
     
}

int main()
{
	std::bitset<4> bits1{ 0b0011 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}