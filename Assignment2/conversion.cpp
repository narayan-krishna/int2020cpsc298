#include <iostream>
using namespace std;

// Write a program that will read in a length in feet and inches and output the
// equivalent length in meters and centimeters. Use at least three functions: one for user input, one or more
// for calculating, and one for output(console). Include a loop that lets the user repeat this computation for
// new input values until the user says he or she wants to end the program (user has to type exit). There are
// 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.

//convert inches into feet by diving by 12, as there are 12 inches in a foot
float inchesToFeet(int inputInches){
  float toFeet = inputInches/12.0;
  return toFeet;
}

//convert feet into meters by multiplying by .3048 meters, because there .3048
//meters in a foot.
float feetToMeters(float feet){
  float toMeters = feet*.3048;
  return toMeters;
}

//converts float meter value to whole meters and centimeters and places them
//into inputted array. converts float meter value to int value (whole meters),
//subtracts int value from float value and multiplies by 100 to get whole
//centimeter value. place whole meters and whole centimeters into array.
void metersToMetersCentimeters(float meters, int array[]){
  int metersWhole = meters;
  int centimetersWhole = (meters - metersWhole)*100;
  array[0] = metersWhole;
  array[1] = centimetersWhole;
}

//calls for user input of feet and inches values. uses inchesToFeet function
//to convert feet + inches to just feet value. returns this value.
float input(){
  int feet = 0;
  int inches = 0;

  cout << "feet: "; cin >> feet;

  cout << "inches: "; cin >> inches;

  float inFeet = feet + inchesToFeet(inches);
  return inFeet;
}

//creates a new array to hold the meter and centimeter values.
//calls metersToMetersCentimeters to take in the input, which is converted to
//meters, and the array created. in metersCentimeters the whole meters and
//centimeters are stored. output values through cout statements.
void output(){
  int metersCentimeters[2];
  metersToMetersCentimeters(feetToMeters(input()), metersCentimeters);
  cout << metersCentimeters[0] << " meters, ";
  cout << metersCentimeters[1] << " centimeters. " << endl;
}

//main uses a while loop to allow user to continuously use program until they
//enter the word exit. 
int main(int argc, char **argv){
  string exit = "";
  while(exit != "exit"){
    output();
    cout << "type 'exit' to leave program, anything else to continue: ";
    cin >> exit;
  }
  return 0;
}
