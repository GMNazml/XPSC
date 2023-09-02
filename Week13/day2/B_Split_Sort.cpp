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
        int a[n],c=0,fr[n+1]={0};
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
           fr[a[i]]++;
           if(a[i]==1){
            continue;
           }
           else if(fr[a[i]-1]==0){
            c++;
           }
        }
        cout<<c<<endl;
    }

    return 0;
}