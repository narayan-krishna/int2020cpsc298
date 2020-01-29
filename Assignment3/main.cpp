#include "pet.h"

int main(int argc, char **argv)
{
  Pet *pet1 = new Pet("Tom", 27, "dog", 34.32);
  Pet *pet2 = new Pet("Anna", 11, "cat", 212.21);

  cout << "pet one name " << pet1->getName() << endl;
  cout << "pet two name " << pet2->getName() << endl;

  delete pet1;
  delete pet2;
  return 0;
}
