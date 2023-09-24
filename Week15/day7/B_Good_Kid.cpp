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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=-1;
        for(int i=0;i<n;i++){
            ll x=a[i]+1;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                x*=a[j];
            }
            ans=max(ans,x);
        }
        cout<<ans<<endl;
    }

    return 0;
}