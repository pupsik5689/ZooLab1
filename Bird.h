#pragma once
#include "Animal.h"

class TBird : public TAnimal
{
public:
  TBird();
  TBird(float _size, float _weight, bool _flying, float _wingspan) :TAnimal(size, weight)
  {
    flying = _flying;
    wingspan = _wingspan;

  }

  ~TBird();

  bool GetFlying();
  float GetWingspan();

  virtual void Print();

  void SetFlying(bool _flying);
  void SetWingspan(float _wingspan);

protected:
  bool flying;
  float wingspan;

};
