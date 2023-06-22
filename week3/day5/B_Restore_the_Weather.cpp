
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long tst;
    cin>>tst;
    while(tst--)
    {
        long long n,x;
        cin>>n>>x;
        vector<pair<long long,long long>>f;
        long long w[n];
        long long tmp;
        for(long long i=0;i<n;i++)
        {
            cin>>tmp;
            f.push_back({tmp,i});
        }
        for(auto &u:w)cin>>u;
        sort(f.begin(),f.end());
        sort(w,w+n);
        long long ans[n];
        for(long long i=0;i<n;i++)
        {
            ans[f[i].second]=w[i];
        }
        for(auto &u:ans)cout<<u<<' ';
        cout<<endl;
    }
}