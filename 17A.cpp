#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    bool prime[n + 1];
    fill(prime, prime+n+1, true);

    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= n; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                if(prime[j])
                {
                    prime[j] = false;
                }
            }
        }
    }

    ll sum = 1;
    ll count = 0;
    bool flag = false;

    ll prime_num_count = 0;

    if(n == 3)
    {
        cout << "YES" << endl;
    }

    for(int i = 5; i <= n; i++)
    {
        ll j = i;
        if(prime[i])
        {
            for(int j = 2; j <= i; i++)
            {
                if(prime[j])
                {
                    sum += i;
                    count++;
                }

                if(count == 2)
                {
                    break;
                }
            }

            if(sum == n)
            {
                prime_num_count++;
            }

        }

    }

    if(flag && count == k)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}