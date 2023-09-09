#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
int a[10000000 + 5] = {0};

int main()
{
    for (int i = 2; i <= sqrt(10000000); i++)
    {
        if (a[i] != 1)
        {
            for (int j = i * 2; j <= 10000000; j += i)
            {
                a[j] = 1;
            }
        }
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int l, r;
        cin >> l >> r;
        int a1, b, x, y;
        int f = 0;
        // for(int i=2;i<=r;i++)cout<<i<<" ";
       if (l < 4 && r >= 4)
        {
            l = 4;
        }
        if (r < 4)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            for (int k = l; k <= r; k++)
            {
                if (a[k] == 1)
                {
                    x = k;
                    f = 1;
                    break;
                }
            }
        }
        for (int z = 2; z <= sqrt(x); z++)
        {
            if (x % z == 0)
            {
                a1 =  z;
                b = x /z;
                break;
            }
        }
        if (f == 0)
        {
            cout << -1 << endl;
            continue;
        }
        int ans1 = a1 * (b - 1);
        int ans2 = a1;
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}