#include "Cat.h"
#include <iostream>

TCat::TCat()
{
  domestic = NULL;
  tail = 0;
}

TCat::~TCat()
{
}

void TCat::Print()
{
  std::cout << "cat\n";
}

bool TCat::GetDomestic()
{
  return domestic;
}

float TCat::GetTail()
{
  return tail;
}

void TCat::SetDomestic(bool _domestic)
{
  domestic = _domestic;
}

void TCat::SetTail(bool _tail)
{
  tail = _tail;
}


