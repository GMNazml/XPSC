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
    vector<string>f;
    while (tst--)
    {
       string s;
       cin>>s;
       f.push_back(s);
       
    }
    reverse(f.begin(),f.end());
    map<string,int>mp;
   // cout<<f[0];
   string s1;
    for(auto x:f){
        s1=x;
        int n1=s1.size();
        
        if(mp[x]==0)
        cout<<s1[n1-2]<<s1[n1-1];
        mp[x]++;
    }

    return 0;
}