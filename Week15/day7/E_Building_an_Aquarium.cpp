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
        int n,ans=1;
        ll x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll l=1,h=10000000010,mid;
        while(l<=h){
             mid=(l+h)/2;
            ll pani=0;
            for(int i=0;i<n;i++){
                if(a[i]<mid)pani+=(mid-a[i]);
            }
            if(pani<=x&&ans<mid)ans=mid;
            if(pani<x){
                l=mid+1;
            }
            else {
                h=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}