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
        int n, l = 0, di = 0, r = 0, mx = 0, l1, l2, f = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n - 1; i++)
        {
            f = 0;
            if (b[i] <= b[i + 1])
            {
                l1 = i;
                while (i < n - 1)
                {
                    if (b[i] != a[i])
                    {
                        f++;
                    }
                    i++;
                    if (b[i] != a[i])
                    {

                        f++;
                    }
                    if (b[i] > b[i + 1])
                    {
                        // cout<<1;
                        l2 = i;
                        di = 0;
                        if (f != 0)
                            di = l2 - l1;
                        // cout<<di<<mx<<endl;
                        if (mx <= di)
                        {

                            mx = di;
                            l = l1 + 1;
                            r = l2 + 1;
                            f = 0;
                            break;
                        }
                    }
                }
                if (b[n - 2] <= b[n - 1] && i == n - 1)
                {
                    if (a[n - 2] != b[n - 2] || a[n - 1] != b[n - 1])
                    {
                        f++;
                    }
                    l2 = i;
                    if (f != 0)
                        ;
                    di = l2 - l1;
                    if (mx <= di)
                    {
                        mx = di;
                        l = l1 + 1;
                        r = l2 + 1;
                        f = 0;
                    }
                }
            }
        }
        cout << l << " " << r << endl;
    }

    return 0;
}