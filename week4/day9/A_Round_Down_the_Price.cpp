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
        ll x;
        cin>>x;
        ll y=x,c=0;
        while(y>0){
            y=y/10;
            c++;
        }
        ll a=x-pow(10,c-1);
        //ll b=pow(10,c)-x;
        //ll ans=min(a,b);
        cout<<a<<endl;
    }

    return 0;
}