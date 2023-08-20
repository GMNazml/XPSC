#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define vll vector<ll>
#define All(X) (X).begin(), (X).end()
#define Unique(X) (X).erase(unique(All(X)), (X).end())
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define pi pair<ll, ll>
#define vpair vector<pair<ll, ll>>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
using namespace std;
int finalAns = INT_MAX;
int finalWh;
int get(int x, int y, int d)
{
    bool temp = ((y - x) % d) == 0;
    return (y - x) / d + 1 - temp;
}
void findAns(int last, int i, int a[], int k, int ch, int n, int wh, int s)
{
    if (i == n)
    {
        if (ch == 1)
        {
            if (s < finalAns)
            {
                finalAns = s;
                finalWh = wh;
            }
        }
        return;
    }
    if (i == n - 1 && (a[i] - last) < k)
    {
        findAns(a[i], i + 1, a, k, ch, n, wh, s);
        return;
    }
    // option 1
    int k1 = (a[i] - last) / k;
    if (a[i] - last % k != 0)
        k1++;
    findAns(a[i], i + 1, a, k, ch, n, wh, s + k1);
    if (i == n - 1)
        return;
    // option 2
    int k2 = (a[i] - last) / k;
    findAns(last, i + 1, a, k, ch + 1, n, i + 1, s + k2);
}
void solve()
{
    finalAns = INT_MAX;
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m);
    int ans = 0;
    for (int i = 0; i < m; i++)
        cin >> v[i];
    int l = 0;
    if (v[0] != 1)
    {
        l = 1;
        v.insert(v.begin() + 0, 1);
    }
    v.pub(n + 1);
    n = v.size();
    for (int i = 1; i < n; i++)
    {
        ans += get(v[i - 1], v[i], k);
    }
    int ans3 = ans, ans2 = ans, cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int cur = get(v[i - 1], v[i + 1], k) - get(v[i - 1], v[i], k) - get(v[i], v[i + 1], k);
        ans2 = ans3 + cur;
        ans = min(ans, ans2);
    }
    for (int i = 1; i < n - 1; i++)
    {
        int cur = get(v[i - 1], v[i + 1], k) - get(v[i - 1], v[i], k) - get(v[i], v[i + 1], k);
        ans2 = ans3 + cur;
        if (ans2 == ans)
            cnt++;
    }
    if (ans == ans3 && l == 0)
        cnt++;
    cout << ans << " " << cnt << endl;
}
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}