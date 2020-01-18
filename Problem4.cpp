#include <iostream>
using namespace std;

// It is difficult to make a budget that spans several years, because prices are not stable. If your company
// needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils two years from
// now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the
// expected cost of an item in a specified number of years. The program asks for the cost of the item, the
// number of years from now that the item will be purchased, and the rate of inflation. The program then
// outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a
// per- centage, such as 5.6 (percent). Your program should then convert the percentage to a fraction, such
// as 0.056, and should use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)

main(int argc, char **argv)
{
  float itemCost = 0;
  int yearsPurchased = 0;
  float inflationRatePercentage = 0;

  cout << "enter cost of item: ";
  cin >> itemCost;

  cout << "enter the number of years from now that the item will be purchased: ";
  cin >> yearsPurchased;

  cout << "enter the rate of inflation: ";
  cin >> inflationRatePercentage;

  float inflationRateFraction = inflationRatePercentage/100;

  for(int i = 0; i < yearsPurchased; ++i)
  {
    itemCost = inflationRateFraction*itemCost + itemCost;
  }

  cout << "the cost of the item after given years is " << itemCost << endl;

  return 0;
}
