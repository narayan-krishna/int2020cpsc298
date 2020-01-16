#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int quizScores[5];
  int totalScore = 0;
  float averageScore = 0;

  int inputScore = 0;
  for(int i = 0; i < 5; ++i)
  {
    cout << "enter input score: ";
    cin >> inputScore;
    quizScores[i] = inputScore;
    totalScore += inputScore;
  }

  averageScore = totalScore/5;
  cout << "average is " << averageScore << endl;
  cout << quizScores[0] << ", ";
  cout << quizScores[1] << ", ";
  cout << quizScores[2] << ", ";
  cout << quizScores[3] << ", ";
  cout << quizScores[4] << endl;
}
