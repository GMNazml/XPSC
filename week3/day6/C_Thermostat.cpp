#include <bits/stdc++.h> 
#define ll long long int
#define endl '\n'
using namespace std;
void solve()
{
    ll l,r,x,a,b,c;
    cin>>l>>r>>x;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    if(abs(a-b)>=x)
    {
        cout<<1<<endl;
    }
    else
    {
        c=abs(a-l);
        ll d=abs(r-a);
        if(c>=x&&b-l>=x)
        {
            cout<<2<<endl;
        }
        else if(d>=x&&r-b>=x)
        {
            cout<<2<<endl;
        }
        else if(c>=x&&r-b>=x)
        {
            cout<<3<<endl;
        }
        else if(d>=x&&b-l>=x)
        {
            cout<<3<<endl;
        }
        else
        cout<<-1<<endl;
    }
}    
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    t=1;
    int cs=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}