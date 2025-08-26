#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"

using namespace std;

int main() {
  Animal animal1("African Elephant", 1758);
  AnimalsInZoo zoo(animal1);
  zoo.display();
}
