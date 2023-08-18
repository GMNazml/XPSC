#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
using namespace std;
ll power(ll base, ll p)
{
    ll ans = 1;
    while (p)
    {
        if (p % 2 == 1)
        {
            ans = (ans * base) % mod;
            p--;
        }
        else
        {
            base = (base * base) % mod;
            p /= 2;
        }
    }
    return ans % mod;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        cout << power(n, k)  << endl;
    }

    return 0;
}