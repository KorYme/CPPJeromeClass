#pragma once
#include <iostream>

void Print(int* ptrInt) {
	int a = 32;
	ptrInt = &a;
	std::cout << *ptrInt << std::endl;
}