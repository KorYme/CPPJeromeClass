#include "Animal.hpp"

// Pas de r�d�finition de param�tres par d�faut
Animal::Animal(const std::string& animalName, const int animalAge) {
	m_name = animalName;
	m_age = animalAge;
	m_liveState = LIVE_STATE::ALIVE;
}

const std::string& Animal::GetName() const
{
	return m_name;
}

// Pas de sp�cificaeur de r��criture dans le .cpp
void Cat::Cri() const
{
	std::cout << "Miaou du coup" << std::endl;
}

void Cat::MangerViande() const
{
	std::cout << "Miam de la viande" << std::endl;
}