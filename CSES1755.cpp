// Solving using a map

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    string str;
    cin >> str;

    map<char, ll> mp;

    for(ll i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }

    ll odd_count = 0;
    char odd_char;

    for(auto it: mp)
    {
        if(it.second % 2 == 1)
        {
            odd_count++;
            odd_char = it.first;
        }
    }

    if(odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
    }

    else if(odd_count == 1 && str.size() % 2 == 0)
    {
        cout << "NO SOLUTION" << endl;
    }

    else
    {
        string left = "";
        string right = "";

        for(auto it: mp)
        {
            string x(it.second/2, it.first);

            left += x;
            right += x;
        }

        reverse(right.begin(), right.end());

        if(odd_count == 1)
        {
            cout << left << odd_char << right << endl;
        }

        else
        {
            cout << left << right << endl;
        }

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