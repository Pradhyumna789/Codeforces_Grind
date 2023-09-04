#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int size1;
    cin >> size1;
    vector<int> arr1(size1);

    for(int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }

    int size2;
    cin >> size2;
    vector<int> arr2(size2);

    for(int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }

    int d;
    cin >> d;

    int result = 0;

    for(int i = 0; i < arr1.size(); i++)
    {
        bool flag = false;
        for(int j = 0; j < arr2.size(); j++)
        {
            if(abs(arr1[i] - arr2[j]) <= d)
            {
                flag = true;
                break;
            }
        }

        if(!flag)
        {
            result++;
        }

    }

    cout << result << endl;

    return 0;

}
