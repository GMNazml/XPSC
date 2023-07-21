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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        ll n,c,sum=0,sum1=0,mx=0;
        cin>>n>>c;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(mx<a[i])mx=a[i];
        }
       for(ll i=0;i<n;i++){
            sum1+=(a[i]*a[i]);
        }
        ll c1=(c-sum1)/4;
        ll a1=n,b1=sum,ans1,ans2;
        ans1=((-1.0*b1)+(sqrt((b1*b1)+(4*a1*c1))))/(2*a1);
        ans2=((-1.0*b1)-(sqrt((b1*b1)+(4*a1*c1))))/(2*a1);
        cout<<mx<<" "<<a1<<" "<<b1<<" "<<c1<<endl;
        if(ans1>0)cout<<ans1<<endl;
        else cout<<ans2<<endl;
    }

    return 0;
}