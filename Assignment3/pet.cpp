#include "pet.h"

Pet::Pet(){
  name = "NoName";
  age = -1;
  type = "unknown";
  weight = -1;
}

Pet::Pet(string petName, int petAge, string petType, double petWeight){
  name = petName;
  age = petAge;
  type = petType;
  weight = petWeight;
}

void Pet::setName(string petName)
{
  name = petName;
}

void Pet::setAge(int petAge)
{
  age = petAge;
}

void Pet::setType(string petType)
{
  type = petType;
}

void Pet::setWeight(double petWeight)
{
  weight = petWeight;
}

string Pet::getName() const{
  return name;
}

int Pet::getAge() const{
  return age;
}

string Pet::getType() const{
  return type;
}

double Pet::getWeight() const{
  return weight;
}
