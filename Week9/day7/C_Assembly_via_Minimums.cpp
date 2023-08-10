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
        ll n, a, b;
        cin >> n;
        map<ll, ll> mp;
        for ( int i = 0; i < (n * (n - 1)) / 2; i++)
        {
            cin >> a;
            mp[a]++;
        }
        auto it = mp.begin();
        for (int i = 1; i <= n; i++)
        {
            if ((*it).second < n - i)
            {
                it++;
            }
            cout << (*it).first << " ";
            (*it).second -= (n - i);
        }
        cout<<endl;
    }

    return 0;
}