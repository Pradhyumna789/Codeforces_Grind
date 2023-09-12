#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        if(n % 2 == 1 || n < 4)
        {
            cout << -1 << endl;
        }

        else if(n == 10)
        {
            cout << 2 << " " << 2 << endl;
        }

        else
        {
            ll min = n / 6; 
            ll max = n / 4;

            if(n % 6 != 0)
            {
                min++;
            }

            cout << min << " " << max << endl;
        }

    }

    return 0;
}
 