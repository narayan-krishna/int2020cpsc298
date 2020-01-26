#include <iostream>
using namespace std;

float addTax(float taxRate, float cost)
{
  int withTax = 0;
  withTax = cost + (taxRate*cost);
}

int main(int argc, char **argv)
{
  float itemCost = 0;
  float taxRatePercentage = 0;
  float costWithTax = 0;

  cout << "enter cost of item: ";
  cin >> itemCost;

  cout << "enter tax rate as a percentage: ";
  cin >> taxRatePercentage;

  float taxRateFraction = taxRatePercentage/100;

  costWithTax = addTax(taxRateFraction, itemCost);

  cout << costWithTax << endl;
}
