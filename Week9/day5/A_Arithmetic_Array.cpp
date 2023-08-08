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
        int n,c=0,ans=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            c+=a[i];
        }
        if(c<=0)ans=1;
        else if(c>n)ans=c-n;
        else if(c<n)ans=1;
        cout<<ans<<endl;
    }

    return 0;
}