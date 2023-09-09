#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        n -= k;

        if(n % 2 == 1)
        {
            cout << "NO" << endl;
        }

        else
        {
            n /= 2;
            if(n < ((k * (k - 2)) / 2))
            {
                cout << "NO" << endl;
            }

            else
            {
                cout << "YES" << endl;
            }
        
        }

    }

    return 0;
}
