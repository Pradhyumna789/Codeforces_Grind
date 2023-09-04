// O(n)
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool is_prime(int num) 
{
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    
    return num > 1;

}

int main()
{
    int n;
    cin >> n;

    for(int i = 4; i < n; i++)
    {
        if(!is_prime(i) && !is_prime(n - i))
        {
            cout << i << " " << n - i << endl;
            break;
        }
    }

    return 0;
}


/*

// O(n^2)
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool is_prime(int num)
{
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    
    return num > 1;

}

int main()
{   
    int result;
    cin >> result;

    bool flag = false;

    int num1, num2;

    for(int i = 4; i < result; i++)
    {
        for(int j = 4; j < result; j++)
        {
            if(i + j == result)
            {
                if(!is_prime(i) && !is_prime(j))
                {
                   num1 = i;
                   num2 = j; 
                   flag = true;
                }
                if(flag)
                {
                    break;
                }
            }
        }
        if(flag)
        {
            break;
        }
    }

    cout << num1 << " " << num2 << endl;

    return 0;
}

// O(1) approach
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 2 == 0)
    {
        cout << 8 << " " << n - 8 << endl;
    }

    else
    {
        cout << 9 << " " << n - 9 << endl;
    }

    return 0;
}
*/


