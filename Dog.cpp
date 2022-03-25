#include "Dog.h"
#include <iostream>

TDog::TDog()
{
  thoroughbred = NULL;
}

bool TDog::GetThoroughbred()
{
  return thoroughbred;
}

void TDog::Print()
{
  std::cout << "dog\n" << std::endl;
}

void TDog::SetThoroughbred(bool _thoroughbred)
{
  thoroughbred = _thoroughbred;
}


