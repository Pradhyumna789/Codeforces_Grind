#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main()
{
    // If the watermelon is even it can be divided into two parts 
    // Also it's mentioned in the problem that the two boys are big fans of even numbers - this means that the given number should be even to divide it into two parts
    // If the given number is even we will print yes otherwise odd
    // edge case - if n is equal to zero or less than zero then also the watermelon cannot be divided into two parts
    // another edge case - even if n is equal to 2 then also we're gonna return NO
    int n;
    cin >> n;
    
    if(n == 0 || n < 0 || n % 2 != 0 || n == 2)
    {
        cout << "NO" << endl;
    }
    
    else
    {
        cout << "YES" << endl;
    }
    
    return 0;
}
 
 