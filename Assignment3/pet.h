#include <iostream>
#include <string>

using namespace std;

class Pet{

  public:
    //constructors
    Pet();
    Pet(string petName, int petAge, string petType, double petWeight);

    //getters
    string getName() const;
    int getAge() const;
    string getType() const;
    double getWeight() const;

    //setters
    void setName(string petName);
    void setAge(int petAge);
    void setType(string petType);
    void setWeight(double petWeight);

  //private data members
  private:
    string name;
    int age;
    string type;
    double weight;
};
