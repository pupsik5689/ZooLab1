#include "Eagle.h"
#include <iostream>

TEagle::TEagle()
{
  visibility = 0;
}

float TEagle::GetVisibility()
{
  return visibility;
}

void TEagle::SetVisibility(float _visibility)
{
  visibility = _visibility;
}

void TEagle::Print()
{
  std::cout << "eagle\n" << std::endl;
}


