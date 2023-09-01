#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
void NumberOfProblemsImplemented(int arr[3], int &no_of_prob_implemented)
{
    
    int sum = 0;
    
    for(int i = 0; i < 3; i++)
    {
        sum += arr[i];  
    }
    
    if(sum == 2 || sum == 3)
    {
        no_of_prob_implemented++;
    }
        
}
 
int main()
{
    int n;
    cin >> n;
    
    int arr[3];
    int no_of_prob_implemented = 0;
    
    while(n--)
    {
        for(int i = 0; i < 3; i++)
        {
            cin >> arr[i];    
        }
        
        NumberOfProblemsImplemented(arr, no_of_prob_implemented);
        
    }
    
    cout << no_of_prob_implemented << endl;
    
    return 0;
}