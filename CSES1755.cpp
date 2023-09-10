// Solving using an ordered map

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
        mp[i]++;
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

    else if(count == 1 && s.size() % 2 == 0)
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


/*

Solving using a vector

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.length();

    vector<int> freq(26, 0);

    for(int i = 0; i < len; i++)
    {
        freq[str[i] - 'A']++;
    }    

    int count = 0;

    for(int i = 0; i < len; i++)
    {
        if(freq[i] % 2 != 0)
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
        int in = -1;

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] % 2 != 0)
            {
                in = i;
            }

            while(freq[i] > 0 && freq[i] != 1)
            {
                left += (char)(i + 'A');
                freq[i] -= 2;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        left += (char)(in + 'A');

        cout << left << right << endl;
    }

    return 0;
}

*/