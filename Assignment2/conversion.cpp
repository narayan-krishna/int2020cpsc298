#include <iostream>
using namespace std;

// Write a program that will read in a length in feet and inches and output the
// equivalent length in meters and centimeters. Use at least three functions: one for user input, one or more
// for calculating, and one for output(console). Include a loop that lets the user repeat this computation for
// new input values until the user says he or she wants to end the program (user has to type exit). There are
// 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.

float inchesToFeet(int inputInches){
  float toFeet = inputInches/12.0;
  return toFeet;
}

float feetToMeters(float feet){
  float toMeters = feet*.3048;
  return toMeters;
}


float input(){
  int feet = 0;
  int inches = 0;

  cout << "feet: ";
  cin >> feet;

  cout << "inches: ";
  cin >> inches;

  float inFeet = feet + inchesToFeet(inches);
  return inFeet;
}

int main(int argc, char **argv){
  cout << feetToMeters(input()) << endl;
  return 0;
}
