#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long size;
    cin >> size;

    long long arr[size];

    for(long long i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    long long ans = 0;

    for(long long i = 1; i < size; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            ans = ans + abs(arr[i] - arr[i - 1]);
            arr[i] = arr[i - 1];
        }
    }

    cout << ans << endl;

    return 0;
}