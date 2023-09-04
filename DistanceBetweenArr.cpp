#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int size1, size2;
    int d, result;

    cin >> size1;
    int arr1[size1];
    
    for(int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cin >> size2;
    int arr2[size2];

    for(int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    cin >> d;
    int size;

    if(size1 < size2)
    {
        size = size2 - size1;
    }

    else
    {
        size = size1 - size2;
    }

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(result <= d)
            {
                result = abs(arr1[i] - arr2[j]);
            }
        }
    }

    cout << result << endl;

}
