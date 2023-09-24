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
        int n,k,f=-1,c=0,c1=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
           if(s[i]=='B'&&((i-c>k-1)||f==-1)){
            f=1;
            c1++;
            c=i;
           }
        }
        cout<<c1<<endl;
    }

    return 0;
}