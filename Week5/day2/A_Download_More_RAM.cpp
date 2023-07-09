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
        int a[n],b[n];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) {
            v.push_back({a[i],-1*b[i]});
        }
        sort(all(v));
        for(int i=0;i<n;i++) {
            if(v[i].first<=k) k+=(-1*v[i].second);
            else break;
        }
        cout<<k<<endl;
    }

    return 0;
}