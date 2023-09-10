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

    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+')v.push_back(s[i]);
    }
    sort(all(v));
    for(int i=0;i<v.size();i++){
       cout<<v[i];
       if(i+1==v.size())break;
       cout<<'+';
    }
    return 0;
}