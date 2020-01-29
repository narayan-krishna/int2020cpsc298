#include <iostream>
using namespace std;

int main(int argc, char **argv){
  const float ozPerTon = 35273.92; //set this value for future conversions
  float ozPackageWeight = 0; //initialize for user input
  float tonsPackageWeight = 0; //initialize for conversion
  int packagesPerTon = 0; //intialize for conversion

  cout << "insert weight of package (oz): "; cin >> ozPackageWeight;

  //finds the weight of the package in tons by dividing the weight of the
  //package in ounces by the ounces in a ton.
  tonsPackageWeight = ozPackageWeight/ozPerTon;
  //determines how many packages are needed to fit a ton of cereal by dividing
  //the ounces in a ton by the ounces per package.
  packagesPerTon = ozPerTon/ozPackageWeight;

  //output statements
  cout << "the weight of the package in tons is " << tonsPackageWeight << " tons." << endl;
  cout << packagesPerTon << " packages are needed to hold 1 ton of cereal." << endl;

  return 0;
}
