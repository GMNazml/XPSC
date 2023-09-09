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
    ll a,b,c;
    cin>>a>>b>>c;
    bool ok=true;
    ll x;
    for(int i=0;i<c;i++){
        if(ok)ok=false;
        else break;
        for(int j=0;j<=9;j++){
             x=a*10+j;
             if(x%b==0){
                a=x;
                ok=true;
                break;
             }
        }
        break;
    }
    if(ok)cout<<a;
    else cout<<-1;
     for(int i=1;i<c;i++){
        if(ok)ok=false;
        else break;
        for(int j=0;j<=9;j++){
             x=a*10+j;
             if(x>10000000000000)x=x%10000000;
             if(x%b==0){
                a=x;
                ok=true;
                cout<<j;
                break;
             }
        }
    }
    return 0;
}