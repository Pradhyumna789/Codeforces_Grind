#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ll n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    ll x = (k * l) / nl;
    ll y = c * d;
    ll z = p / np;

    ll min1 = min(x, y);
    ll min2 = min(y, z);
    ll min3 = min(min1, min2);

    ll ans = min3 / n;

    cout << ans << endl;

    return 0;
}