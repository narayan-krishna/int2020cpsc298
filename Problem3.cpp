#include <iostream>
using namespace std;

// An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
// are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
// for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
// $10 per week is withheld for medical insurance. Write a program that will read in the number of hours
// worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
// the net take-home pay for the week.

int main(int argc, char **argv)
{

  const float dollarsPerHour = 16.00;

  int hoursPerWeek = 0;
  cout << "input hours worked per week: ";
  cin >> hoursPerWeek;

  float medicalInsurance = 10.00;
  float socialSecurityTax = .06;
  float federalIncomeTax = .14;
  float stateIncomeTax = .05;

  float grossPay = dollarsPerHour*hoursPerWeek;
  float socialSecurityWithheld = socialSecurityTax*grossPay;
  float federalIncomeWithheld = federalIncomeTax*grossPay;
  float stateIncomeWithheld = stateIncomeTax*grossPay;

  float netTakeHome = grossPay - (socialSecurityWithheld + federalIncomeWithheld + stateIncomeWithheld);

  cout << "gross pay: " << grossPay << " dollars" << endl;
  cout << socialSecurityWithheld << " is the amount withheld for social security tax" << endl;
  cout << federalIncomeWithheld << " is the amount withheld for federal income tax" << endl;
  cout << stateIncomeWithheld << " is the amount withheld for federal income tax" << endl;
  cout << medicalInsurance << " is the amount withheld for medical insurance" << endl;

  cout << "the net take-home pay for the week is " << netTakeHome << endl;

}
