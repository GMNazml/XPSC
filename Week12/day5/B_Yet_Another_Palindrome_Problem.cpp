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
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int fr[60000]={0},fr1[60000]={0};
        fr[a[0]]++,fr1[a[0]]++;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1])fr[a[i]]++;
            fr1[a[i]]++;
        }
        int f=0;
        for(int i=0;i<n;i++){
            if(fr[a[i]]>1||fr1[a[i]]>2)f=1;
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}