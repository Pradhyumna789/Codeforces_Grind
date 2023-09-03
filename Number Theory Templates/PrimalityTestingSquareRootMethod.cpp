#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool is_prime(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return n > 1;
    
}

int main()
{
    int n;
    cin >> n;

    cout << is_prime(n) << endl;

    return 0;
}