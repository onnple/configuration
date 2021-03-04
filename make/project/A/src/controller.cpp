#include "controller.h"
#include "cal.h"
#include "print.h"

void requestAdd(int &a, int &b) {
	int r = add(a, b);
	printInteger(r);
}

void requestMinus(int &a, int &b) {
	int r = minus(a, b);
	printInteger(r);
}

void requestMul(int &a, int &b) {
	int r = mul(a, b);
	printInteger(r);
}

void requestDiv(int &a, int &b) {
	int r = div(a, b);
	printInteger(r);
}

void printMessage(std::string &str) {
	printString(str);
}
