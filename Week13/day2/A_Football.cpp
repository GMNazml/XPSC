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
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    //  for(auto u:mp)
    // {
    //     cout<<u.first<< "  "<<u.second<<endl;
    // }

    int x=INT_MIN;
    string ans;
    for(auto u:mp)
    {
        if(u.second>x)
        {
            ans=u.first;
            x=u.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}