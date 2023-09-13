#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll x = 0;

    while(n--)
    {
        string s;
        cin >> s;

        if(s[0] == '+' || s[1] == '+')
        {
            x++;
        }

        if(s[0] == '-' || s[1] == '-')
        {
            x--;
        }

    }

    cout << x << endl;

    return 0;
}