#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin>>n;
        int ar[n+4];
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);
        vector<int>v;
        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0,j=n/2;i<n/2;i++,j++)
        {
            v.push_back(ar[i]);
            v.push_back(ar[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);
        int ans=0;
        for(int i=1;i<v.size()-1;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])continue;
            else if(v[i]<v[i-1] && v[i]<v[i+1])continue;
            else
            {
                ans=1;
                break;
            }
        }
        if(ans==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
