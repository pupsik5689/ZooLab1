#include "Bird.h"
#include <iostream>

TBird::TBird()
{
  flying = NULL;
  wingspan = 0.0;
}

TBird::~TBird()
{
}

bool TBird::GetFlying()
{
  


  return flying;
}

float TBird::GetWingspan()
{
  return wingspan;
}

void TBird::SetFlying(bool _flying)
{
  flying = _flying;
}

void TBird::SetWingspan(float _wingspan)
{
  wingspan = _wingspan;
}

void TBird::Print()
{
	std::cout << "bird\n" << std::endl;
}
