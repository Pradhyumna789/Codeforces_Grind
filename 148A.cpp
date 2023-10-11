#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<bool> damaged(d + 1, false);

    for(int i = 1; i <= d; i++) {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            damaged[i] = true;
        }
    }

    int count = 0;
    for(int i = 1; i <= d; i++) {
        if(damaged[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}