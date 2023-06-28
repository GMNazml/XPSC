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
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n],f=0;
        for(int i=0;i<n;i++){
            b[i]=(m-a[i])+1;
        }
        for(int i=0;i<n;i++){
            if(b[i]<k) f=1;
        }
        if(f==1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}