#include <iostream>
#include <vector>
#include <list>
#include "Animal.hpp"
#include "Pointers.h"

int main()
{
	#pragma region FirstLesson
	std::string str = "Chat";
	Cat cat(str, 0);
	//cat.MangerViande();
	//cat.Cri();
	#pragma endregion

	#pragma region SecondLesson
	//Pointers part
	int z = 15;
	int* ptr = &z;
	//Print(ptr);

	//Vector part
	std::vector<int> tab1;
	for (size_t i = 0; i < 3; i++)
	{
		tab1.push_back(i);
	}
	std::vector<int>::iterator tab1Iterator = tab1.begin();
	while (tab1Iterator != tab1.end())
	{
		//std::cout << *tab1Iterator << std::endl;
		tab1Iterator++;
	}

	std::list<int> tab2 {42, 66, 33};
	for (auto it = tab2.rbegin(); it != tab2.rend() ; it++)
	{
		//std::cout << *it << std::endl;
	}
	for (int& value : tab2)
	{
		value++;
	}
	for (int value : tab2) 
	{
		std::cout << value << std::endl;
	}
	auto it = std::find(tab2.begin(), tab2.end(), 50);
	if (it != tab2.end())
		tab2.erase(it); 
	#pragma endregion

}