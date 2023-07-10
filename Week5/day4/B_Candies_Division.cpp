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
        int n, k;
        cin >> n >> k;
        if (n % k == 0)
        {
            cout << n << endl;
        }
        else
        {
            int x = n / k;
            int tmp;
            tmp = k / 2;
            int r = n - x * k;
            int ans;
            if (r <= tmp)
                ans = x * k + r;
            else
                ans = x * k + tmp;
            cout << ans << endl;
        }
    }
    return 0;
}