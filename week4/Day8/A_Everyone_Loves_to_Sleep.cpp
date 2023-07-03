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
        int n;
        pair<int,int>x,slp={24,0};
        cin>>n>>x.first>>x.second;
        for(int i=0;i<n;i++){
            int h,m;
            cin>>h>>m;
            if(m<x.second) m+=60,h--;
            if(h<x.first) h+=24;
            slp=min(slp,{h-x.first,m-x.second});
        }
        cout<<slp.first<<" "<<slp.second<<endl;

    }

    return 0;
}