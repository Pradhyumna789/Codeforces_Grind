#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    const long long max = 1e6 + 1;

    vector<int> counter(max, 0);

    for(long long i = 1; i < max; i++)
    {
        for(long long j = i; j < max; j += i)
        {
            counter[j]++;
        }
    }

    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        cout << counter[n] << endl;
    }

    return 0;
}