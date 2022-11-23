#include "function.h" // contains forward declarations, is needed because functions call one another

char codedToChar(std::bitset<8> binary)
{
	binary = decode(binary);					   // decode the the number
	return static_cast<char>(binaryToInt(binary)); // parse it from binary to int, and from int to char
}
std::bitset<8> decode(std::bitset<8> binary)	   // to decode our bit we need to decrease it's value by 1 (binary)
{
	for (int i = 0; i < 8; i++)					   //we need to move over all the bits, and we know our number is 8 bit long 
	{
		int check{ binary.test(i) };			   // we need to check, if the bit is equal to 1 we decrease it to 0 and finish our function call
		if (check == 1)
		{
			binary.flip(i);
			return binary;
		}
		binary.flip(i);							  // if it's equal to 0 we set it to 1, because the next bit value is twice as much 
	}											  // so if we increase this one and decrease the next number we only decrease by 1 overall
	return binary;
}
int binaryToInt(std::bitset<8> binary)
{
	int sum{0};
	for (int i = 0; i < 8; i++)					 // we need to check the value of all 8 bits
	{
		if (binary.test(i) == 1)				 // if the bit is on we add it's value to sum
			sum += bitValue(i);
	}
	return sum;
}

int bitValue(int bit)
{
	int number{1};
	while (bit >= 1)							 // we loop a number of time equal to bit position
	{
		number *= 2;							 // each loop we double the value, because the value of a bit is 2^n. and there is no direct way to do power without another library
		bit--;
	}
	return number;
}
