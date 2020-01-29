#include <iostream>
using namespace std;

// Write a program that will read up to ten nonnegative integers into an array
// called numberArray and then write the integers back to the screen (console output). For this exercise you
// need not use any functions.

int main(int argc, char **argv)
{
  int numbers[10]; //initialize array to store numbers

  //for loop continuously prompts user for a number to input until array is full
  int inputNumber = 0;
  for(int i = 0; i < 10; ++i)
  {
    //gets input
    cout << "enter a number: "; cin >> inputNumber;
    //places input into array
    numbers[i] = inputNumber;
  }

  //for loop outputs numbers in array
  for(int i = 0; i < 10; ++i)
  {
    cout << numbers[i] << " ";
  }

  cout << endl;

  return 0;
}
