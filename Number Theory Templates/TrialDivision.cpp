#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> printPrimeFactors(int n)
{
    vector<int> facts;

    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            facts.push_back(i);
            n /= i;
        }
    }

    if(n > 1)
    {
        facts.push_back(n);
    }

    return facts;
}

int main()
{
    int n;
    cin >> n;

    vector<int> result = printPrimeFactors(n);

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}