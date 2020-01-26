#include <iostream>
using namespace std;

void zeroBoth(int& first_int, int& second_int)
{
  first_int = 0;
  second_int = 0;
}

int main(int argc, char **argv)
{
  int usr_first_int = 0;
  int usr_second_int = 0;

  cout << "enter a number: ";
  cin >> usr_first_int;

  cout << "enter a number: ";
  cin >> usr_second_int;

  zeroBoth(usr_first_int, usr_second_int);

  cout << usr_first_int;
  cout << usr_second_int << endl;

  return 0;
}
