#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, char> mp;

    string input;
    cin >> input;

    transform(input.begin(), input.end(), input.begin(), ::tolower);
    for(auto i: input) {
        mp[i]++;
    }

    int count = 0;
    for(auto i: mp) {
        if((i.first >= 'a' && i.first <= 'z')) {
            count++;
        }
    }

    if(count == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}