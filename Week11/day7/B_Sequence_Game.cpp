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
        int a[n],c=n;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=1;i<n;i++){
           if(a[i-1]>a[i])c++;
        }
        cout<<c<<endl;
        cout<<a[0]<<" ";
        for(int i=1;i<n;i++){
           if(a[i-1]>a[i]){
            cout<<a[i]<<" ";
            cout<<a[i]<<" ";
           }
           else cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}