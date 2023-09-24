#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;

    string str = to_string(n);

    map<char, ll> mp;

    bool flag = true;;

    ll count = 0;

    for(auto i: str) {
        mp[str[i]]++;
    }

    for(auto it: mp) {
        if(it.first == '4') {
            if(it.second < 1) {
                flag = false;
            }
        }

        if(it.first == '7') {
            if(it.second < 1) {
                flag = false;
            }
        }
    }

    if(flag) {
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '4' || str[i] == '7') {
                count++;
            }
        }
    } else {
        cout << "NO" << endl;
    }

    if(count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}