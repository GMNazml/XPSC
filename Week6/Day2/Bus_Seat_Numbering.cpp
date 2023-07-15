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
        int x;
        cin>>x;
        if(x<11)cout<<"Lower Double"<<endl;
        else if(x<16)cout<<"Lower Single"<<endl;
        else if(x<26)cout<<"Upper Double"<<endl;
        else cout<<"Upper Single"<<endl;
    }

    return 0;
}