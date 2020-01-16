#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int testScore = 0;

  cout << "insert test score: ";
  cin >> testScore;

  if(testScore >= 90)
  {
    cout << "A" << endl;
  }
  else if(testScore >= 80)
  {
    cout << "B" << endl;
  }
  else if(testScore >= 70)
  {
    cout << "C" << endl;
  }
  else
  {
    cout << "FAIL" << endl;
  }
}
