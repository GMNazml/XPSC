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
        ll n,m;
        cin>>n>>m;
        ll a[m];
        ll sum=0;
        for(int i=0;i<m;i++){
            cin>>a[i];
            //sum+=a[i];
        }
         for(int i=0;i<m;i++){
            //cin>>a[i];
            sum+=a[i];
        }
        ll ans=(((n+1)*n)/2)-sum;
        //cout<< sum<<" ";
        cout<<ans<<endl;
    }

    return 0;
}