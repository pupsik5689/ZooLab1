#pragma once
#include "Animal.h"

class TMammal : public TAnimal
{
public:
  TMammal();
  TMammal(float size, float weight, int _teeth, bool _ground) :TAnimal(size, weight)
  {
    this->size = size;
    this->weight = weight;
    teeth = _teeth;
    ground = _ground;
  }

  ~TMammal();

  int GetTeeth();
  bool GetGround();

  void SetTeeth(int _teeth);
  void SetGround(bool _ground);

  virtual void Print();

protected:
  int teeth;
  bool ground;

};

