#pragma once
#include "Bird.h"
#include <iostream>
#include <string>

class TPenguin : public TBird
{
public:
  TPenguin();
  TPenguin(float size, float weight, bool flying, float wingspan, std::string _neckcolor) : TBird(size, weight, flying, wingspan)
  {
    neckcolor = _neckcolor;
  }

  ~TPenguin();


  std::string GetNeckcolor();

  void SetNeckcolor(std::string _neckcolor);

  virtual void Print();

protected:
  std::string neckcolor;

};
