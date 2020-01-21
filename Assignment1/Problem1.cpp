#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  const float ozPerTon = 35273.92;
  float ozPackageWeight = 0;
  float tonsPackageWeight = 0;
  int packagesPerTon = 0;

  cout << "insert weight of package (oz): ";
  cin >> ozPackageWeight;

  tonsPackageWeight = ozPackageWeight/ozPerTon;
  packagesPerTon = ozPerTon/ozPackageWeight;

  cout << "the weight of the package in tons is " << tonsPackageWeight << " tons." << endl;
  cout << packagesPerTon << " packages are needed to hold 1 ton of cereal." << endl;

  return 0;
}
