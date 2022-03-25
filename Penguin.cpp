#include "Penguin.h"

TPenguin::TPenguin()
{
  neckcolor = "";
}

TPenguin::~TPenguin()
{
}

std::string TPenguin::GetNeckcolor()
{
  return neckcolor;
}

void TPenguin::SetNeckcolor(std::string _neckcolor)
{
  neckcolor = _neckcolor;
}

void TPenguin::Print()
{
  std::cout << "penguin\n" << std::endl;
}
