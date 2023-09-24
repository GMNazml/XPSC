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
    int tst,a,f=0;
    cin >> tst;
    while (tst--)
    {
      cin>>a;
      if(a==1){
        f=1;
      }  
    }
    if(f==1)cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}