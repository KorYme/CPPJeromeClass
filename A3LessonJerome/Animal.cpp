#include "Animal.hpp"

// Pas de rédéfinition de paramètres par défaut
Animal::Animal(const std::string& animalName, const int animalAge) {
	m_name = animalName;
	m_age = animalAge;
	m_liveState = LIVE_STATE::ALIVE;
}

const std::string& Animal::GetName() const
{
	return m_name;
}

// Pas de spécificaeur de réécriture dans le .cpp
void Cat::Cri() const
{
	std::cout << "Miaou du coup" << std::endl;
}

void Cat::MangerViande() const
{
	std::cout << "Miam de la viande" << std::endl;
}