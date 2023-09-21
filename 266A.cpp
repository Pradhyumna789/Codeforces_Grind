#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll count = 0;
    for(ll i = 0; i < s.length(); i++) {
        if(s[i] == s[i + 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}