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
    ll n,i,a,o=0,e=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a&1) o++;
        else e++;
    }
    cout<<min(o,e)<<endl;
    return 0;
}