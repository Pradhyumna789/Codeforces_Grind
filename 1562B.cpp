#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{

    ll t;
    cin >> t;

    while(t--) {

        ll n;
        cin >> n;

        if(prime[n]) {
            cout << true << endl;
        } else {
            cout << false << endl;
        }

    }

    return 0;
}