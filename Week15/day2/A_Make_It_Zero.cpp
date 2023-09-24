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
         ll n,i;
           cin>>n;
           ll arr[n];
           for(i=0;i<n;i++)cin>>arr[i];
           if(n%2==0)
           {
              cout<<2<<endl;
              cout<<"1 "<<n<<endl;
              cout<<"1 "<<n<<endl;
           }
           else{
                 cout<<4<<endl;
             cout<<"1 "<<n-1<<endl;
              cout<<"1 "<<n-1<<endl;
              cout<<2<<" "<<n<<endl;
              cout<<2<<" "<<n<<endl;

           }
    }

    return 0;
}