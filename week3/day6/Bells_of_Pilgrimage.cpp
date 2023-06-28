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
        int n, x, k, p;
        cin >> n >> x >> k >> p;
        int ans;
        if (k <= x)
            ans = p + (k * 10);
        else if (n == k)
            ans = p + (x * 10) + (5 * (k - x)) + 20;
        else
            ans = p + (x * 10) + (5 * (k - x));
        cout<<ans<<endl;    
    }

    return 0;
}