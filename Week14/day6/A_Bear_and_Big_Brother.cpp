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
    int a,b;
    cin>>a>>b;
    int x=0;
    while(a<=b){
        a*=3;
        b*=2;
        x++;
    }
    cout<<x;
    return 0;
}