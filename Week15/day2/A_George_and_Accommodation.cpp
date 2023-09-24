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
    int tst,c=0;
    cin >> tst;
    while (tst--)
    {
      int a,b;
      cin>>a>>b;
      if(b-a>1)c++;
    }
    cout<<c;
    return 0;
}