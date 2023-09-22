#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define mod 1000000009; // -> mod = 10^9
using namespace std;

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);

        for(auto &i: a) cin >> i;

        sort(a.begin(), a.end()), [](ll x, ll y) {
            return x % 2 < y % 2;
        };

        for(auto i: a) cout << i << " ";

        // ll ans = 0;
        // for(int i = 0; i < n; i++) {
        //     for(int j = i + 1; j < n; j++) {
        //         ans += __gcd(a[i], 2 * a[j]) > 1;
        //     }
        // }

        // cout << ans << endl;

    }

    return 0;
}