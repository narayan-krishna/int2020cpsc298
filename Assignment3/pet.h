#include <iostream>
#include <string>

using namespace std;

class Pet{
  public:
    Pet();
    Pet(string petName, int petAge, string petType, double petWeight);

    string getName() const;
    int getAge() const;
    string getType() const;
    double getWeight() const;

    void setName(string petName);
    void setAge(int petAge);
    void setType(string petType);
    void setWeight(double petWeight);

  private:
    string name;
    int age;
    string type;
    double weight;
};
