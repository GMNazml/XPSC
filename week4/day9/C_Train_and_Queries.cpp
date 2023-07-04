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
        int a[n];
        map<int,int>mp,mp1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(mp1[a[i]]==0){
                mp1[a[i]]=i+1;
            }
            mp[a[i]]=i+1;
        }
        for(int i=0;i<k;i++){
            int x,y;
            cin>>x>>y;
            if(mp1[x]&&mp[y]&&mp1[x]<=mp[y]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        //cout<<mp[10]<<"x";
    }

    return 0;
}