#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define mod 1000000007
using namespace std;
 
ll factorial(ll n) {
    ll fact = 1;
    ll num = n * 2;
    for(ll i = 3; i <= num; i++) {
        fact = (fact * i) % mod;
    }
 
    return fact;
}
 
int main() {
 
    ll t;
    cin >> t;
 
    while(t--) {
 
        ll n;
        cin >> n;
 
        ll ans = factorial(n);
 
        cout << (ans) << endl; // test case got wrong -> 91234
 
    }
 
    return 0;
}