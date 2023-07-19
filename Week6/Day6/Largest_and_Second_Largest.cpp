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
       set<int,greater<int>>s;
       int n,a;
       cin>>n; 
       for(int i=0;i<n;i++){
        cin>>a;
        s.insert(a);
       }
       auto i=s.begin();
       int ans=*i;
       i++;ans+=*i;
       cout<<ans<<endl;
    }

    return 0;
}