#include <bits/stdc++.h>
#define endl '\n'
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
        int n, i, j, x, mx = 0, sum = 0, y, z, k, res = 0;
        cin >> n;
        int arr[n + 4];
        map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2 || n == 3)
        {
            cout << 1 << endl;
        }
        else
        {
            sort(arr, arr + n);
            sum = arr[n - 1] + arr[n - 2];

            for (i = sum; i >= 1; i--)
            {
                int ll;
                if (i & 1)
                {
                    ll = i / 2 + 1;
                }
                else
                {
                    ll = i / 2;
                }
                for (j = i - 1, k = 1; j >= ll; j--, k++)
                {

                    x = j;
                    y = k;
                    //  cout << x << " " << y << endl;
                    if (x == y)
                    {
                        z = mp[x] / 2;
                    }
                    else
                    {
                        z = min(mp[x], mp[y]);
                    }

                    res += z;
                }
                mx = max(mx, res);
                res = 0;
            }
            cout << mx << endl;
        }
    }

    return 0;
}