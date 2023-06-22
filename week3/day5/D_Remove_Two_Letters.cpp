#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

void solve()
{
    ll n,i,a,k,b;
    cin>>n;
    string s;
    cin>>s;
    ll ans=1;
    for(i=1;i<n-1;i++)
    {
        if(s[i-1]!=s[i+1])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
} 
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }

    return 0;
}