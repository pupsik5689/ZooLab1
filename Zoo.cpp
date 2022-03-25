#include "Zoo.h"
#include <iostream>

TZoo::TZoo()
{
	anim = 0;
	animals = nullptr;
}

TZoo::~TZoo()
{
	if (animals != nullptr)
		delete[] animals;
}

void TZoo::AddAnimal(TAnimal* animal)
{
	if (anim == 0)
	{
		animals = new TAnimal * [1];
		anim = 1;
		animals[0] = animal;
	}
	else
	{
		TAnimal** tmp = new TAnimal * [anim + 1];
    for (int i = 0; i < anim; i++)
    {
      tmp[i] = animals[i];
    }

		//delete[] animal;
		animals = tmp;
		animals[anim] = animal;
		anim++;
	}

}

void TZoo::PrintZoo()
{
  for (int i = 0; i < anim; i++)
  {
    animals[i]->Print();
  }
}



