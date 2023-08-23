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
            int ar[n+3];
            for(int i=0;i<n;i++)cin>>ar[i];
            int mn=INT_MAX;
            int smn=INT_MAX;
            int ans=0;
            for(int i=0;i<n;i++)
            {
                    if(ar[i]>mn && ar[i]<smn)
                    {
                            ans++;
                            smn=min(smn,ar[i]);
                    }
                    mn=min(mn,ar[i]);
            }
            cout<<ans<<endl;
    }

    return 0;
}