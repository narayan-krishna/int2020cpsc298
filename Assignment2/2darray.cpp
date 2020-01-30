#include <iostream>
using namespace std;

int main(int argc, char **argv){

  int a[4][5];

  for(int i = 0; i < 4; ++i){
    char numberString[5];
    cout << "input 5 numbers: "; cin >> numberString;
    for(int j = 0; j < 5; ++j){
      a[i][j] = (int)numberString[j] - 48;
    }
  }

  for(int x = 0; x < 4; ++x){
    for(int y = 0; y < 5; ++y){
      cout << a[x][y];
    }
    cout << endl;
  }

  return 0;
}
