#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for(auto i: s) {
        mp[i]++;
    }

    bool flag = true;

    for(auto i: mp) {
        if(i.second > 1) {
            i.second = 0;
        }
    }

    ll count = 0;
    for(auto i: mp) {
        count++;
    }

    if(count % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}