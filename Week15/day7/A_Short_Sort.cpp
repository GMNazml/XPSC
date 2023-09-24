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
        string s;
        cin>>s;
        int a=0;
        if(s[0]!='a')a++;
        if(s[1]!='b')a++;
        if(s[2]!='c')a++;
        if(a==3)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}