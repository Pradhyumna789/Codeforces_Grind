#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for(auto i: s)
    {
        mp[s[i]]++;
    }

    ll count = 0;

    for(auto it: mp)
    {
        if(it.second % 2 == 1)
        {
            count++;
        }
    }

    if(count > 1)
    {
        cout << "NO SOLUTION" << endl;
    }

    else
    {

        string left = "";
        string right = "";
        ll odd_char_index = -1;
        char odd_char;

        for(auto it: mp)
        {
            if(it.second % 2 == 1)
            {
                odd_char = it.first;
            }

            string x(it.second / 2, it.first);
            left = left + x;
            right = x + right;
        }

        if(count == 1)
        {
            left += odd_char;
        }

        cout << left << right << endl;

    }

    return 0;
}