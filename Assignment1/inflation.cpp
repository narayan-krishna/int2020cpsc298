#include <iostream>
using namespace std;

main(int argc, char **argv)
{
  //intialize variables for input
  float itemCost = 0;
  int yearsPurchased = 0;
  float inflationRatePercentage = 0;

  //take in the cost of the item
  cout << "enter cost of item: ";
  cin >> itemCost;

  //take in the number of years from now the product will be purchased
  cout << "enter the number of years from now that the item will be purchased: ";
  cin >> yearsPurchased;

  //take in the inflation rate as a percentage
  cout << "enter the rate of inflation: ";
  cin >> inflationRatePercentage;

  //change percentage to fraction for calculation purposes by dividing percent
  //by 100
  float inflationRateFraction = inflationRatePercentage/100;

  //for every year purchased, calculate the item cost. inflation rate is
  //continuously applied per year.
  for(int i = 0; i < yearsPurchased; ++i){
    itemCost = inflationRateFraction*itemCost + itemCost;
  }

  //out statement
  cout << "the cost of the item after given years is " << itemCost << endl;

  return 0;
}
