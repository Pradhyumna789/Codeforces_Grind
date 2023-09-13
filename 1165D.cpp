/*

We guessed some integer number x
You are given a list of almost all its divisors except 1 and x.

Your task is to find the minimum possible integer x that can be the guessed number, or say that the input data is contradictory and it is impossible to find such number.

*/

#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int size;
        cin >> size;

        ll arr[size];

        for(int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        ll max = *max_element(arr, arr + size);
        ll n = 2 * max;

        while(n >= max)
        {
            for(int i = 0; i < size; i++)
            {
                while(n % arr[i] == 0)
                {
                    break;
                }
            }

            n--;
        }

    }

    return 0;
}