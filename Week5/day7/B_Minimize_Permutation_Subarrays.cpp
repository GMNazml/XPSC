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
        int n, i, mx = 0, x, y;
        cin >> n;
        int pos[n + 5], arr[n + 5];
        for (i = 1; i <= n; i++)
        {
            cin >> x;
            pos[x] = i;
            arr[i] = x;
        }
        x = min(pos[1], pos[2]);
        y = max(pos[1], pos[2]);
        if (pos[n] > x && pos[n] < y)
        {
            cout << 1 << " " << 1 << endl;
        }
        else if (pos[n] < x)
        {
            cout << pos[n] << " " << x << endl;
        }
        else
        {
            cout << pos[n] << " " << y << endl;
        }
    }

    return 0;
}