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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>b+c+d||b>a+c+d||c>a+b+d||d>a+b+c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}