#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        set<int>out;
        cin>>k>>n;
        int buff=1;
        for(int i=0;buff+i<=n;i++)
        {
            buff+=i;
            out.insert(buff);
        }
        if(out.size()>=k)
        {
            auto x=out.begin();
            for(int i=0;i<k;i++,x++)cout<<*x<<' ';
            cout<<endl;
        }
        else 
        {
            int m=k-out.size();
            int p=n;
            while(m)
            {
                if(out.count(p)==0)
                {
                    m--;
                    out.insert(p);
                    p--;
                }
                else p--;
            }
            for(auto u:out)cout<<u<<' ';
            cout<<endl;

        }
       
    }
}