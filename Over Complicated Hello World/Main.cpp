#include <iostream>
#include "function.h"

int main()
{
	std::cout
		<< codedToChar(0b01001001)//H
		<< codedToChar(0b01100110)//e
		<< codedToChar(0b01101101)//l
		<< codedToChar(0b01101101)//l
		<< codedToChar(0b01110000)//o
		<< codedToChar(0b01100000)//' '
		<< codedToChar(0b01111000)//w
		<< codedToChar(0b01110000)//o
		<< codedToChar(0b01110011)//r
		<< codedToChar(0b01101101)//l
		<< codedToChar(0b01100101)//d
		<< codedToChar(0b00100010);//!
	return 0;
}