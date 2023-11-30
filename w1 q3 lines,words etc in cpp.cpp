#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("filename.txt");
    string text,myText;
    int sum=0;

while (getline (in, myText))
  {
    text=text +" "+ myText;
    sum=sum+1;

  }

  cout<<sum<<endl;
    int numWords = 0;
    int numVowels = 0;
    int numDigits = 0;
    string input = text;
    cout<<input;
    input.erase(unique(input.begin(), input.end(), [](char a, char b) 
    {
        return isspace(a) && isspace(b);
    }), input.end());
    for (char ch : input)
        {
        if (ch==' ')
        {
            numWords++;
        }
        else if (isdigit(ch))
        {
            numDigits++;
        }
        else if (isalpha(ch))
         {
            char lowercaseCh = tolower(ch);
            if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u')
            {
                numVowels++;
            }

        }
    }

    cout << "Number of words: " << numWords << endl;
    cout << "Number of vowels: " << numVowels << endl;
    cout << "Number of digits: " << numDigits << endl;

    return 0;
}