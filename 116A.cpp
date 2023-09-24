#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;

    ll a[n], b[n];

    for(ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    ll total = b[0] - a[0];

    ll result = -1;
    ll j = 1;
    for(ll i = 2; i <= n; i++) {
        result = max(result, total); 
        total = (total - a[j]) + b[j];
        j++;
    }

    cout << result << endl;

    return 0;
}