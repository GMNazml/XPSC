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
        int a,b,c;
        cin>>a>>b>>c;
        ll sum=a+2*b+c;
        if(sum&1)cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}