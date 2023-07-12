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
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=1000,x;
        sort(a,a+n);
        for(int i=1;i<n;i++){
          x=(a[i]-a[i-1]);
          ans=min(ans,x);
        }
        cout<<ans<<endl;
    }

    return 0;
}