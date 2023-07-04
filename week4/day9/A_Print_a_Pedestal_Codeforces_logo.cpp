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
        int n,a,b,c;
        cin>>n;
        a=ceil(1.00*n/3);
        b=a+1;
        c=n-a-b;
        if(c==0){
            a--;
            c++;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}