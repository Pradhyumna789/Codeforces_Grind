#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll n, h;
    cin >> n >> h;

    ll a[n];

    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll b[n];

    for(ll i = 0; i < n; i++) {
        if(a[i] > h) {
            b[i] = 2;
        }

        if(a[i] <= h) {
            b[i] = 1;
        }
    }

    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += b[i];
    }

    cout << sum << endl;
    
    return 0;
}