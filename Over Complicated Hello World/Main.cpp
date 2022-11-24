#include "function.h"

int main()
{
	std::cout
		<< codedToChar(0b10010011)//H
		<< codedToChar(0b11001101)//e
		<< codedToChar(0b11011011)//l
		<< codedToChar(0b11011011)//l
		<< codedToChar(0b11100001)//o
		<< codedToChar(0b11000001)//' '
		<< codedToChar(0b11110001)//w
		<< codedToChar(0b11100001)//o
		<< codedToChar(0b11100111)//r
		<< codedToChar(0b11011011)//l
		<< codedToChar(0b11001011)//d
		<< codedToChar(0b01000101);//!
	return 0;
}