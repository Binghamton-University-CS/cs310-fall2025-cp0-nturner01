#include "Animal.h"

class AnimalsInZoo{
 public:
  AnimalsInZoo(Animal zooAnimal);
  AnimalsInZoo();
  void display();
  
 private:
  int numAnimals;
  Animal animal;
};
