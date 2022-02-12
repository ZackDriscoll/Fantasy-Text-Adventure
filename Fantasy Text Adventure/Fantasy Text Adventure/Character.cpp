#include "Character.h"
#include <iostream>


std::string Character::GetName()
{
	return Name;
}

void Character::SetName(std::string n)
{
	Name = n;
}

void Character::Attack()
{
	std::cout << "I am attacking!";
}