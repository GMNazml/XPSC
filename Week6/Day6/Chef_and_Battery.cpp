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
        int a,c=0;
        cin>>a;
        while(true){
           if(a==50)break;
           else if(a<50){
            a+=2;
            c++;
           }
           else{
            a-=3;
            c++;
           }
        }
        cout<<c<<endl;
    }

    return 0;
}