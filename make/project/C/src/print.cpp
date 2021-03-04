#include "print.h"
#include <iostream>

void printString(std::string &str) {
	std::cout << "String: " << str << std::endl;
}

void printInteger(int &number) {
	std::cout << "Integer: " << number << std::endl;
}

void printDouble(double &number) {
	std::cout << "Double: " << number << std::endl;
}
