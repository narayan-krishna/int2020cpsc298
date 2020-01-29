#include <iostream>
using namespace std;

int main(int argc, char **argv)
{

  const float dollarsPerHour = 16.00; //initialize given problem instruction

  int hoursPerWeek = 0; //initialize for user input
  //reads in number of hours worked per week
  cout << "input hours worked per week: "; cin >> hoursPerWeek;

  //initialize tax percentages for latter calcuation
  float medicalInsurance = 10.00;
  float socialSecurityTax = .06;
  float federalIncomeTax = .14;
  float stateIncomeTax = .05;

  //first, calculate overall pay by multiplying dollars made per hour against
  //hours worked per week
  float grossPay = dollarsPerHour*hoursPerWeek;
  //then determine the amount of money to be witheld by each tax by multiplying
  //the tax floats against grosspay
  float socialSecurityWithheld = socialSecurityTax*grossPay;
  float federalIncomeWithheld = federalIncomeTax*grossPay;
  float stateIncomeWithheld = stateIncomeTax*grossPay;

  //subtract the amounts withheld from net pay, including medical insurance.
  float netTakeHome = grossPay - (socialSecurityWithheld + federalIncomeWithheld + stateIncomeWithheld + medicalInsurance);

  //output statements
  cout << "gross pay: " << grossPay << " dollars" << endl;
  cout << socialSecurityWithheld << " is the amount withheld for social security tax" << endl;
  cout << federalIncomeWithheld << " is the amount withheld for federal income tax" << endl;
  cout << stateIncomeWithheld << " is the amount withheld for federal income tax" << endl;
  cout << medicalInsurance << " is the amount withheld for medical insurance" << endl;

  cout << "the net take-home pay for the week is " << netTakeHome << endl;

  return 0;
}
