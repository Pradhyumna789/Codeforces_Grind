#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll n, t;
    string str;

    cin >> n >> t;
    cin >> str;

    ll j = 0;
    while(j < t) {
        for(ll i = 0; i < str.length(); ) {
            if(str[i] == 'B' && str[i + 1] == 'G') {
                swap(str[i], str[i + 1]);
                i += 2;
            } else {
                i++;
            }
        }

    j++;

    }

    cout << str << endl;

    return 0;
}