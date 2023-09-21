#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ll a[5][5] = {0};

    for(int i = 0; i < 5; i++) {
         for(int j = 0; j < 5; j++) {
            cin >> a[i][j];
         }
    }

    cout << endl;
    
     ll curr_row = -1;
     ll curr_col = -1;
     ll target_row = 3;
     ll target_col = 3; 
     for(int i = 0; i < 5; i++) {
         for(int j = 0; j < 5; j++) {
            if(a[i][j] != 0) {
                curr_col = j + 1;
                curr_row = i + 1;
            }
         }
    }

    cout << abs(curr_row - target_row) + abs(curr_col - target_col) << endl;

    return 0;
}