#include <iostream>
using namespace std;

int main(int argc, char **argv){

int a[4][5]; //initialize array

//for loop runs through first dimension of array
for(int i = 0; i < 4; ++i){
  char numberString[5]; //initialize character string for user input
  cout << "input 5 numbers: "; cin >> numberString; //take in input
  for(int j = 0; j < 5; ++j){ //run through second dimension of array
    a[i][j] = (int)numberString[j] - 48; //translate char to int, fill array
  }
}

//print array back out for testing purposes.
for(int x = 0; x < 4; ++x){
  for(int y = 0; y < 5; ++y){
    cout << a[x][y];
  }
  cout << endl;
}

return 0;
}
