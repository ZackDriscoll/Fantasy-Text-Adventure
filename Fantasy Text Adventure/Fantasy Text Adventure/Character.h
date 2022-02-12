#pragma once
#include <iostream>
#include <string>


class Character
{
public:
	std::string GetName();
	void SetName(std::string n);
	virtual void Attack();

	std::string Name;
};

