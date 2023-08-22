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
        //vector<int>v;
       int pri[n+1]={0};
       cout<<1<<" ";
        for(int i=2;i<=n;i++){
           if(pri[i]==0){
            cout<<i<<" ";
            for(int j=i*2;j<=n;j*=2){
                cout<<j<<" ";
                pri[j]=1;
            }
           }
        }
        cout<<endl;
    }

    return 0;
}