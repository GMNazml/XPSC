#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod  1000000007
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
       
     ll nt,f=1;
       cin>>nt;
       for(ll i=2*nt;i>=3;i--)
       {
           f=(f*i)%mod;
       }
       cout<<f%mod<<endl; 
    }

    return 0;
}