#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll x;
    cin >> x;

    ll max = 5;
    ll result = x;
    ll count = 0;

    bool flag = true;
    while(flag) {
        result = result - max;
        count++;

         if(result <= 0) {
            flag = false;
        } 

        if(!flag) break;
    }

    cout << count << endl;

    return 0;
} 
