#include<bits/stdc++.h>
using namespace std;
#define ll long long  
#define endl '\n'

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    auto sgn = [&](int x) {
        if (x > 0) return 1;
        else if (x < 0) return -1;
        else return 0;
    };

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a) cin >> it;
        long long sum = 0;
        for (int i = 0; i < n; ++i) 
        {
            int cur = a[i];
            int j = i;
            while (j < n && sgn(cur) == sgn(a[j])) {
                cur = max(cur, a[j]);
                j++;
            }
            sum += cur;
            i = j - 1;
        }

        cout << sum << endl;
    }

    return 0;
}
