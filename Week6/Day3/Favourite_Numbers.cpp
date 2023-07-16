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
        int a;
        cin>>a;
        if(a%2==0&&a%7==0) cout<<"Alice"<<endl;
        else if(a%2!=0&&a%9==0)cout<<"Bob"<<endl;
        else cout<<"Charlie"<<endl;
    }

    return 0;
}