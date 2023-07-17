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
        if(s[0]>'1')cout<<"DD/MM/YYYY"<<endl;
        else if(s[3]>'1')cout<<"MM/DD/YYYY"<<endl;
        else if(s[0]=='1'&&s[1]>'2')cout<<"DD/MM/YYYY"<<endl;
        else if(s[3]=='1'&&s[4]>'2')cout<<"MM/DD/YYYY"<<endl;
        else cout<<"BOTH"<<endl;
    }

    return 0;
}