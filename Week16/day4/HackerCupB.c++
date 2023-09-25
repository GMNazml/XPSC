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

    int tst,i=0;
    cin >> tst;
    while (tst--)
    {
        ll r,c,a,b;
        cin>>r>>c>>a>>b;
        i++;
        if(r>c)cout<<"Case #"<<i<<": "<<"YES"<<endl;
        else cout<<"Case #"<<i<<": "<<"NO"<<endl;
    }

    return 0;
}