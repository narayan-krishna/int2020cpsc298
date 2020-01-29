#include "pet.h"

//pet constructors, getters, and setters

//CONSTRUCTORS

//default constructor
Pet::Pet(){
  name = "NoName";
  age = -1;
  type = "unknown";
  weight = -1;
}

//non-default constructor
Pet::Pet(string petName, int petAge, string petType, double petWeight){
  name = petName;
  age = petAge;
  type = petType;
  weight = petWeight;
}

//SETTERS

//set pet name
void Pet::setName(string petName){
  name = petName;
}

//set pet age
void Pet::setAge(int petAge){
  age = petAge;
}

//set pet type
void Pet::setType(string petType){
  type = petType;
}

//set pet weight
void Pet::setWeight(double petWeight){
  weight = petWeight;
}

//GETTERS

//get name
string Pet::getName() const{
  return name;
}

//get age
int Pet::getAge() const{
  return age;
}

//get type
string Pet::getType() const{
  return type;
}

//get weight
double Pet::getWeight() const{
  return weight;
}
