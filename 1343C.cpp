#include<bits/stdc++.h>
using namespace std;
#define ll long long  
#define endl '\n'

bool sgn(ll &x)
{
    return x > 0;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {

        ll size;
        cin >> size;
        vector<ll> a(size);

        for(ll i = 0; i < size; i++)
        {
            cin >> a[i];
        }

        ll sum = 0;

        for(ll i = 0; i < size; i++)
        {
            ll j = i;
            ll curr = a[i];

            while(j < size && (sgn(a[i]) == sgn(a[j])))
            {
                curr = max(curr, a[j]);
                j++;
            }

            sum += curr;
            i = j - 1;

        }

        cout << sum << endl;

    }

    return 0;
}
