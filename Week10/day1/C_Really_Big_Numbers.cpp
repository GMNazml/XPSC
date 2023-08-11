#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
int digSum(ll n)
{
    int ans = 0;
    while (n)
        ans += n % 10, n /= 10;
    return ans;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    ll ans = 0;
    ll l = 1, h = n;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (mid - digSum(mid) >= s)
            ans = max(ans, n - mid + 1), h = mid - 1;

        else
            l = mid + 1;
    }
    cout << ans << endl;

    return 0;
}