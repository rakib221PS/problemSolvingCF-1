#include <iostream>
#include <string>
using namespace std;

int main()
{
  for (int i = 0; i < 3; i++)
  {
    string sentence;
    cout << "what are You saerching for?";
    getline(cin, sentence);
    string newArrayElement;
    for (int i = 0; sentence[i] != ' '; i++)
    {
      newArrayElement = newArrayElement + sentence[i];
    }
    cout<<newArrayElement<<endl;
  }
}

// .......................................................................
// string array = arrayElement;
// string newArrayElement;
// cout<<array << endl;
// for (int i = 0; array[i]!=' '; i++)
// {
//     newArrayElement = newArrayElement + array[i];
// }
// .......................................................................
// string makeLowerCaseArrayElement = arrayElement;
// int shift = 'a' - 'A';
// for (int i = 0; arrayElement[i] != '\0'; ++i)
// {
//     if (arrayElement[i] >= 'A' && arrayElement[i] <= 'Z')
//         arrayElement[i] = arrayElement[i] + shift;
// }