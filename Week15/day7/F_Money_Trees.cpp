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
        int n,k;
        cin>>n>>k;
        int a[n],h[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        ll f=1;
        for(int i=0;i<n;i++){
            if(a[i]<=k){
                f=0;
                break;
            }
        }
        ll x=a[0],cunt =1,ans=0;
         for(int i=1;i<n;i++){
            if(x+a[i]<k&&h[i-1]%h[i]==0){
                cunt++;
                x+=a[i];
                
            }
            else{
                cunt =1;
                x=a[i];
            }
            ans=max(ans,cunt);
        }
        if(f==1)cout<<0<<endl;
        else
        cout<<ans<<endl;
    }

    return 0;
}