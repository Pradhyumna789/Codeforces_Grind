#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{   
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int count = 0;

        if(a == b)
        {
            count = 0;
        }

        else if(c > a && c > b)
        {
            count = 1;
        }

        else
        {
            if(a > b)
            {
                while(a > b)
                {
                    a = a - c;
                    b = b + c;
                    count++;
                }
            }

            else
            {
                while(a < b)
                {
                    b = b - c;
                    a = a + c;
                    count = count + 1;
                }
            }
        }

        cout << count << endl;

    }

    return 0;
}
