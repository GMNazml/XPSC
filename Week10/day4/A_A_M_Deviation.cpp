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
        ll a, b, c, ans, x;
        cin >> a >> b >> c;
        if (2 * b >= a + c)
        {
            x = 2 * b - a -c;
            if (x % 3 == 0)
                ans = 0;
            else
                ans = 1;
        }
        else
        {
            x = a + c - 2 * b;
            if (x % 3 == 0)
                ans = 0;
            else
                ans = 1;
        }
       // cout<<x<<" ";
        cout << ans << endl;
    }

    return 0;
}