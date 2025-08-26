#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal zooAnimal){
  numAnimals = 1;
  animal = zooAnimal;
}

AnimalsInZoo::AnimalsInZoo(){
  numAnimals = 0;
}

void AnimalsInZoo::display(){
  std::cout << numAnimals << std::endl;
  if(numAnimals == 1){
    animal.display();
  }
}
