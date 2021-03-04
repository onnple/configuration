#include "controller.h"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
	int a = 9, b = 3;
	std::string start = "Start Calculation......";
	std::string end = "End Calculation......";
	printMessage(start);
	requestAdd(a, b);
	requestMinus(a, b);
	requestMul(a, b);
	requestDiv(a, b);
	printMessage(end);
	return 0;
}
