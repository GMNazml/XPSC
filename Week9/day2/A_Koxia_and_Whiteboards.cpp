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
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        ll sum = 0;
        for (int i = 0; i < m; i++)
        {
            sort(a, a + n);
            a[0] = b[i];
        }
        cout << accumulate(a, a + n, sum) << endl;
    }

    return 0;
}