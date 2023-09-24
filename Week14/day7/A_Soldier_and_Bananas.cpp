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
    int a,b,c;
    cin>>a>>b>>c;
    ll x=0;
    for(int i=1;i<=c;i++){
         x+=i*a;
    }
    if(x<b)cout<<0;
    else
    cout<<x-b;
    return 0;
}