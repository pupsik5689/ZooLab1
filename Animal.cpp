#include "Animal.h"
#include <iostream>

TAnimal::TAnimal(float _size, float _weight)
{
  size = _size;
  weight = _weight;
}

TAnimal::TAnimal()
{
  size = 0;
  weight = 0;
}

TAnimal::~TAnimal()
{
}

void TAnimal::Print()
{
	std::cout << "animal\n";
}

float TAnimal::GetSize()
{
  return size;
}

float TAnimal::GetWeight()
{
  return weight;
}

void TAnimal::SetSize(float _size)
{
  size = _size;
}

void TAnimal::SetWeight(float _weight)
{
  weight = _weight;
}
