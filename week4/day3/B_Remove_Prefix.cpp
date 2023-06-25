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
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        reverse(all(v));
        int fr[n+1]={0};
        int x,f=1;
       for(int i=0;i<n;i++){
           if(fr[v[i]]!=0){
            x=i;
            f=0;
            break;
           }
           fr[v[i]]++; 
        } 
        if(f==1) x=n;
        cout<<(n-x)<<endl;
    }

    return 0;
}