#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int 
 
void solve()
{
    ll x,y;
    cin>>x>>y;
    ll ans;
    if(x>y)
    {
        if(x%2==0)
        {
            ans=x*x;
            ans-=(y-1);
        }
        else
        {
            ans=(x-1)*(x-1);
            ans++;
            ans+=(y-1);
        }
    }
    else
    {
        if(y%2!=0)
        {
            ans=y*y;
            ans-=(x-1);
        }
        else
        {
            ans=(y-1)*(y-1);
            ans++;
            ans+=(x-1);
        }
    }
    cout<<ans<<endl;
    return ;
}
 
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}