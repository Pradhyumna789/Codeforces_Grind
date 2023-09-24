#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll n;
    string str;

    cin >> n;
    cin >> str;

    map<char, ll> mp;

    for(auto i: str) {
        mp[i]++;
    }

    ll count_A = 0;
    ll count_B = 0;

    for(auto i: mp) {
        if(i.first == 'A') {
            count_A = i.second;
        }

        if(i.first == 'D') {
            count_B = i.second;
        }
    }

    if(count_A > count_B) {
        cout << "Anton" << endl;
    } else if(count_B > count_A) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    
    return 0;

    }
