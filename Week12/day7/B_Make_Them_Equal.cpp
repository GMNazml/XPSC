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
    int a[n],fr[101]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(fr[a[i]]==0)v.push_back(a[i]);
        fr[a[i]]++;
    }
    sort(all(v));
    if(v.size()>3)cout<<-1;
    else if(v.size()==1)cout<<0;
    else if(v.size()==2&&(v[1]-v[0])%2==0)cout<<(v[1]-v[0])/2;
    else if(v.size()==2)cout<<(v[1]-v[0]);
    else if(v[1]-v[0]!=v[2]-v[1])cout<<-1;
    else cout<<(v[1]-v[0]);
    return 0;
}