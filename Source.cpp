#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Cat.h"
#include "Dog.h"
#include "Penguin.h"
#include "Eagle.h"
#include "Zoo.h"

#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
  TCat a(16, 50.5, 12, true, false);
  std::cout << a.GetSize() << "\n";

  
  TAnimal b(5, 13);


  TMammal c(5, 27, 15, false);
  c.SetGround(false);
  c.GetGround();

  bool n = c.GetGround();
  std::cout << n << "\n";
  std::cout << b.GetSize() << "\n";


  TPenguin p(5, 15, 0, 10, "yellow");
  std::cout << p.GetNeckcolor() << "\n";


  TEagle e(5, 15, true, 10, 5);
  std::cout << e.GetWingspan() << "\n\n\n";


  TZoo zo;                  //polymorphism

  zo.AddAnimal(&b);
  zo.AddAnimal(&a);
  zo.AddAnimal(&e);

  zo.PrintZoo();

  return 0;

}