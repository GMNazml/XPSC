#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin>>t; while(t--)
    {
        string s; cin>>s;
        deque<char>dq;
        for(auto u:s)
        {
            if(u=='-')
            {
                while(dq.back()!='+') dq.pop_back();
                    dq.pop_back();
            }
            else dq.push_back(u);
        }
        bool ok=true;
        int st=0;
        if(dq.front()=='+') {st=1; dq.pop_front();}
        else {ok=false; dq.clear();}
        for(auto u:dq)
        {
            if(u=='+') st=0;
            else
            {
               if(u=='1' && st==-1) ok=false;
               if(u=='0' && st==1) ok=false;
               if(u=='1' && st==0) st=1;
               if(u=='0' && st==0) st=-1;
            }
        }
         if(ok) cout<<"YES\n";
            else cout<<"NO\n";
    }
}
