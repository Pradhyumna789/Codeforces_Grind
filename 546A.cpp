#include<bits/stdc++.h>
#define mod 1000000009
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ll k, n, w;
    cin >> k >> n >> w;

    ll total_cost = 0;
    for(int i = 1; i <= w; i++) {
        total_cost = total_cost + (i * k);
    }

    if (total_cost - n <= 0) {
        cout << 0 << endl;
    } else {
        cout << total_cost  - n << endl;
    }


    return 0;
}