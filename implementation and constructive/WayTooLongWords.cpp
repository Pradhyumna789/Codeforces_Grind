#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
string AbbreviatedWord(string Word)
{
    int length = Word.length();
    if(length <= 10)    
    {
        return Word;
    }
    else
    {
        string NewWord;
        NewWord += Word[0];
        NewWord += to_string(length - 2);
        NewWord += Word[length - 1];
        return NewWord;
    }
}
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string Word;
        cin >> Word;
        cout << AbbreviatedWord(Word) << endl;
    }
    
    return 0;
    
}
