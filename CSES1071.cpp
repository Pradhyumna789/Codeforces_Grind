#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{

    const int max_y = 1e9 + 1;
    const int max_x = 1e9 + 1;

    int t;
    cin >> t;

    while(t--)
    {
        int y, x;
        cin >> y >> x;

        for(int j = 0; j < max_y; j++)
        {
            for(int i = 0; i < max_x; i++)
            {
                if(j == y && i == x)
                {
                    cout << j << " " << i << endl;
                }
            }
        }

    } 

    return 0;
}