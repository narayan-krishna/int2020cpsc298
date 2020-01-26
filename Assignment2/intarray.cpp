#include <iostream>
using namespace std;

// Write a program that will read up to ten nonnegative integers into an array
// called numberArray and then write the integers back to the screen (console output). For this exercise you
// need not use any functions.

int main(int argc, char **argv)
{
  int numbers[10];

  int inputNumber = 0;
  for(int i = 0; i < 10; ++i)
  {
    cout << "enter a number: ";
    cin >> inputNumber;
    numbers[i] = inputNumber;
  }

  cout << numbers[0] << ", ";
  cout << numbers[1] << ", ";
  cout << numbers[2] << ", ";
  cout << numbers[3] << ", ";
  cout << numbers[4] << ", ";
  cout << numbers[5] << ", ";
  cout << numbers[6] << ", ";
  cout << numbers[7] << ", ";
  cout << numbers[8] << ", ";
  cout << numbers[9] << endl;
}
