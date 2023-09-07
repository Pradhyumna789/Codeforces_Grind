#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string str;
    cin >> str;

    map<char, int> freq;
    vector<char, int> freq2(26, 0);


    for(auto c: str)
    {
        freq[c]++;
    }

    for(auto c: str)
    {
        freq2[c]++;
    }

    for(auto c: str)
    {
        if(freq[c] > 0)
        {
            cout << c << " " << freq[c];
            freq[c] = 0;
        }
    }

    for(auto c: str)
    {
        if(freq2[c] > 0)
        {
            cout << c << " " << freq2[c];
            freq2[c] = 0;
        }
    }

    return 0;
}