#pragma once

#include "Animal.h"


class TZoo
{
public:
	TZoo();
	~TZoo();



	void AddAnimal(TAnimal* animal);
	void PrintZoo();

protected:

	TAnimal** animals;
	int anim;
};
