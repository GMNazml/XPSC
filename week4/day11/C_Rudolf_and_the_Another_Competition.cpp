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
        ll n,m,h,a;
        cin>>n>>m>>h;
        vector<ll>v[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a;
                v[i].push_back(a);
            }
        }
        for(int i=0;i<n;i++){
            sort(v[i].begin(),v[i].end());
        }
        vector<pair<int,ll>>vp;
        pair<int,ll>sd;
        for(ll i=0;i<n;i++)
        {
            ll j,sum=0,sum1=0;
            for( j=0;j<m&&sum1+v[i][j]<=h;j++)
            {
                
                sum+=sum1+v[i][j];
                sum1+=v[i][j];
            }
           // if(sum<=h&&j<m)j++;
            vp.push_back({-1*j,sum});
            if(i==0)sd={-1*j,sum};
        }
        //for(auto u:vp)cout<<u.first<<' '<<u.second<<endl;
        sort(vp.begin(),vp.end());
        cout<<find(vp.begin(),vp.end(),sd)-vp.begin()+1<<endl;
       // for(auto u:vp)cout<<u.first<<' '<<u.second<<endl;
    }

    return 0;
}