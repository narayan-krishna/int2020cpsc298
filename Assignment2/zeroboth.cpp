#include <iostream>
using namespace std;

//zero both function changes integer values to 0. parameters are passed by
//reference so the value of the variable in the main will change as a result
void zeroBoth(int& first_int, int& second_int)
{
  first_int = 0;
  second_int = 0;
}

int main(int argc, char **argv)
{
  //intitalize variables for user input

  //usually i initialize with 0, but given the expected result of this given
  //program i think it is better to intitalize with a value of 1
  int usr_first_int = 1;
  int usr_second_int = 1;

  //get user input
  cout << "enter a number: "; cin >> usr_first_int;

  cout << "enter a number: "; cin >> usr_second_int;

  //user zero both function to set value of each integer to 0
  zeroBoth(usr_first_int, usr_second_int);

  //out statements
  cout << "integer values: " << endl;
  cout << usr_first_int << ", ";
  cout << usr_second_int << endl;

  return 0;
}
