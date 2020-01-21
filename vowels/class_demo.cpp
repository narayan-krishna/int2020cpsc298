#include "class_demo.h"

//now its time to implement my function body
int CPSC298Utils::countVowels(string input)
{
  int count = 0;
  char c = '\0';
  for (int i = 0; i < input.size(); ++i)
  {
    c = tolower(input[i]);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      count++;
    }
  }
  return count;
}
