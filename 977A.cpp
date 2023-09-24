#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    for(int i = 1; i <= k; i++) {
        if(n % 10 == 0) {
            n /= 10;
            continue;
        }
        n--;
    }

    cout << n << endl;

    return 0;
}