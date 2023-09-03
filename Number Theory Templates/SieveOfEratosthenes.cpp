#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void prime(int n)
{
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

    for(int i = 2; i <= n; i++)
    {
        if(prime[i]) cout << i << " ";
    }

}

int main()
{
    int n;
    cin >> n;

    prime(n);

    return 0;
}