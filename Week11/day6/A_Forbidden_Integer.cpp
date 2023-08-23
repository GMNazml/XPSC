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
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v;
        int  f = 0;
        while (k > 0)
        {
            if (k == x)
            {
                k--;
                continue;
            }
            if(x==1&&n%2!=0&&k%2==0){
                k--;
                continue;
            }
            else if(x==1&&n%2==0&&k%2!=0){
              k--;
                continue;  
            }
            n = n - k;
            if (n == 0)
            {
                f = 1;
                v.push_back(k);
                break;
            }
            else if (n > 0)
            {
                v.push_back(k);
            }
            else if (n < 0)
            {
                n += k;
                k--;
            }
        }
        if(f==1){
        cout<<"Yes"<<endl<<v.size()<<endl;
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
        }
        else
        cout<<"No"<<endl;
    }

    return 0;
}