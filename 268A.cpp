#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> vec(n);

    for(int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(vec[i].first == vec[j].second) {
                count++;
            }
        }
    }
    
    cout << count << endl;
}