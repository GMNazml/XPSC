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
        if(a+b>=10)cout<<"YES"<<endl;
        else if(a+c>=10)cout<<"YES"<<endl;
        else if(c+b>=10)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}