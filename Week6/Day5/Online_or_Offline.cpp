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
        float x,y;
        cin>>x>>y;
        if(x-(x/10)<y)cout<<"ONLINE"<<endl;
        else if(x-(x/10)>y)cout<<"DINING"<<endl;
        else cout<<"EITHER"<<endl;
    }

    return 0;
}