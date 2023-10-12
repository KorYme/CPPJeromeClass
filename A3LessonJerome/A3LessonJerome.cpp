#include <iostream>
#include "Animal.hpp"

int main()
{
	std::string str = "Chat";
	Cat cat(str, 0);
	cat.MangerViande();
	cat.Cri();
}