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
        int a,x;
        cin>>a;
        if(a%10>=5){
          x=(a/10+1)*10;
        }
        else x=a/10*10;
        cout<<100-x<<endl;
    }

    return 0;
}