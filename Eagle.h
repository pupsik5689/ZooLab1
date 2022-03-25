#pragma once
#include "Bird.h"

class TEagle : public TBird
{
public:
  TEagle();
  TEagle(float size, float weight, bool flying, float wingspan, float _visibility) : TBird(size, weight, flying, wingspan)
  {
    visibility = _visibility;
  }

  float GetVisibility();

  void SetVisibility(float _visibility);

  virtual void Print();

protected:
  float visibility;


};