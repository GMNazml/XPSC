#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;


int main()
{
    int tst,ans=0,c=0;
    cin >> tst;
    while (tst--)
    {
       int a,b;
       cin>>a>>b;
       c=c-a+b;
       ans=max(ans,c); 
    }
    cout<<ans<<endl;
    return 0;
}