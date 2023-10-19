#pragma once
#include <iostream>

// Enums
enum LIVE_STATE
{
	ALIVE,
	DEAD,
	HALF_DEAD_HALF_ALIVE,
};

// Interfaces
class Criard
{
public:
	virtual void Cri() const = 0;
};

class Carnivore
{
public:
	virtual void MangerViande() const = 0;
};


// Classes
class Animal : public Criard
{
public:
	Animal(const std::string& animalName = "Gerard", const int animalAge = 0);

	virtual void Cri() const = 0;

	const std::string& GetName() const;

protected:
	std::string m_name;

	int m_age;

	LIVE_STATE m_liveState;
};


class Cat : public Animal, public Carnivore
{
public:
	using Animal::Animal;

	void Cri() const override;

	void MangerViande() const override;

private:

};