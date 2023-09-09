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
        cin >> n;
        int a, b,ans=500,x,y;
        for (int i = 0; i < n; i++)
        {
           cin>>a>>b;
           y=ceil(b/2.0);
           x=a+y-1;
           ans=min(ans,x);
        }
        cout<<ans<<endl;
    }

    return 0;
}