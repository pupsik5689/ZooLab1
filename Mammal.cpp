#include "Mammal.h"
#include <iostream>

TMammal::TMammal()
{
  teeth = 0;
  ground = NULL;

}

//TMammal::TMammal(float _size, float _weight, int _teeth, bool _ground) : TAnimal( size, weight)
//{
//  this->size = _size;
//  this->weight = _weight;
//  teeth = _teeth;
//  ground = _ground;
//
//}


TMammal::~TMammal()
{
}

int TMammal::GetTeeth()
{
  return teeth;
}

bool TMammal::GetGround()
{
  


  return ground;
}

void TMammal::SetTeeth(int _teeth)
{
  teeth = _teeth;
}

void TMammal::SetGround(bool _ground)
{
  ground = _ground;
}

void TMammal::Print()
{
  std::cout << "mammal\n" << std::endl;
}

