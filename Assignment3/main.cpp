#include "pet.h"

//main
int main(int argc, char **argv)
{
  //create pointers to two new pets
  Pet *pet1 = new Pet("Tom", 27, "dog", 34.32);
  Pet *pet2 = new Pet("Anna", 11, "cat", 212.21);

  //output statements using pointers
  cout << "PET 1" << endl;
  cout << "name: " << pet1->getName() << endl;
  cout << "age: " << pet1->getAge() << endl;
  cout << "type: " << pet1->getType() << endl;
  cout << "weight: " << pet1->getWeight() << endl;

  cout << endl;

  cout << "PET 2" << endl;
  cout << "name: " << pet2->getName() << endl;
  cout << "age: " << pet2->getAge() << endl;
  cout << "type: " << pet2->getType() << endl;
  cout << "weight: " << pet2->getWeight() << endl;

  //delete pets
  delete pet1;
  delete pet2;
  return 0;
}
