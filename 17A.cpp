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

    vector<int> primes;
    ll count = 0;

    for(int i = 2; i <= n; i++)
    {
        if(prime[i])
        {
            primes.push_back(i);
        }
    }

    for(int i = 1; i < primes.size(); i++)
    {
        if(prime[primes[i] + primes[i - 1] + 1] && (primes[i] + primes[i - 1] <= n))
        {
            count++;
        }
    }

    // cout << count << endl;

    if(count >= k)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
    

    return 0;
}

 