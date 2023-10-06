#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int p[n];

    p[0] = a[0];

    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] + a[i];
    }

    for(int i = 1; i < n; i++) {
        cout << p[i] << " ";
    }

    return 0;
}