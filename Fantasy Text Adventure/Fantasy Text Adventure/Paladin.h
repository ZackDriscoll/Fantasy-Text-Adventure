#pragma once
#include "Character.h"


class Paladin : public Character
{
public:
	//Set Character Name
	std::string name = Character().Name;

	//Override Attack Function
	void Attack() override;
};

