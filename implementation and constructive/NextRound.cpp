#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main() 
{
 
   int n, k;
   cin >> n >> k;
   
   int arr[n];
   int count = k;
   
   for(int i = 1; i <= n; i++)
   {
       cin >> arr[i];
   }
   
   if(arr[1] == 0)
   {
       cout << 0 << endl;
       return 0;
   }
 
   if(arr[k] == 0)
   {
        for(int i = k; i >= 1; i--)
        {
            if(arr[i] != 0)
            {
                break;
            }
            count--;
        }
        cout << count << endl;
        return 0;
   }
   
   for(int i = k + 1; i <= n; i++)
   {
       if(arr[i] == arr[k])
       {
           count++;
       }
   }
   
   cout << count << endl;
   
   return 0;
 
}