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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>v;
        int x=1;
        for(int i=0;i<n;i++){
            v.push_back(b);
            b-=x;
            x++;
        }
        reverse(all(v));
        if(v[0]<a)cout<<-1<<endl;
        else{
            v[0]=a;
            for(auto u:v)cout<<u<<" ";
            cout<<endl;
        }
    }

    return 0;
}