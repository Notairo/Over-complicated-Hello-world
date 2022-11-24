#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
#include <bitset>
char codedToChar(std::bitset<8> binary);	  // This function get a binary decode it using function decode
											  // then swap from binary to int with the function binaryToInt
											  // then return the char from the ascii table equal to int
int binaryToInt(std::bitset<8> binary);		  // This function get a binary value and parse it to int
											  // it uses function power to parse every bit then reconstruct the value 
int bitValue(int bit);						  // This function get a single bit and parse it to int
std::bitset<8> decode(std::bitset<8> binary);
bool password();							  // If you know the password you can decode the file
#endif