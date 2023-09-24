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

    int tst,h,c=0,x;
    cin >> tst>>h;
    while (tst--)
    {
       cin>>x;
       if(x>h)c+=2;
       else c++; 
    }
    cout<<c<<endl;
    return 0;
}