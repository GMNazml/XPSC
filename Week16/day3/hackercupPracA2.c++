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

    int tst, i = 0;
    cin >> tst;
    while (tst--)
    {
        ll a, b, c, ans = 0, ans1, x, x1;
        cin >> a >> b >> c;
        if (b <= a)
        {
            ans = c * 2 - 1;
        }
        else if (a * 2 <= b)
        {
            ans = c;
        }
        else
        {
            if (c >= a)
            {
                c -= a;
                ans = 1;
            }
            ans += ((c / b) * 2);
            if (c % b >= a)
                ans++;
        }
        i++;
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}