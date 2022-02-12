#pragma once
#include "Character.h"


class Rogue : public Character
{
public:
	//Set Character Name
	std::string name = Character().Name;

	//Override Attack Function
	void Attack() override;
};

