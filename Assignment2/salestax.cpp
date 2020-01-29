#include <iostream>
using namespace std;

//function takes in a cost and a tax rate, and applies the tax rate to the cost
float addTax(float taxRate, float cost)
{
  int withTax = 0; //initialize withTax
  withTax = cost + (taxRate*cost); //set it to cost + tax rate*cost
}

int main(int argc, char **argv)
{
  //intitalize variables for user input
  float itemCost = 0;
  float taxRatePercentage = 0;

  //initialize for output
  float costWithTax = 0;

  //get cost of item and tax rate from user
  cout << "enter cost of item: "; cin >> itemCost;

  cout << "enter tax rate as a percentage: "; cin >> taxRatePercentage;

  //connvert percentage to fraction for calculaiton by dividing by 100
  float taxRateFraction = taxRatePercentage/100;

  //call add tax function to calculate cost with tax
  costWithTax = addTax(taxRateFraction, itemCost);

  //out statement
  cout << costWithTax << endl;

  return 0;
}
