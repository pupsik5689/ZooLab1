#pragma once
#include "Mammal.h"

class TDog : public TMammal
{
public:
  TDog();
  TDog(float size, float weight, int teeth, bool ground,bool _thoroughbred) : TMammal(size, weight, teeth, ground)
  {
    thoroughbred = _thoroughbred;
  }

  bool GetThoroughbred();

  virtual void Print();

  void SetThoroughbred(bool _thoroughbred);

protected:
  bool thoroughbred;

};