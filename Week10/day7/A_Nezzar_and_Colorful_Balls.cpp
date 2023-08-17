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
        int n,ans=0;
        cin>>n;
        int a,c[102]={0};
        for(int i=0;i<n;i++){
            cin>>a;
            c[a]++;
        }
        for(int i=0;i<102;i++){
            if(ans<c[i])ans=c[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}