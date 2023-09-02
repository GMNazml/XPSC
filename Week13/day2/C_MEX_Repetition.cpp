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
        int n, k, m = -1;
        cin >> n >> k;
        int a[n + 2], fr[n + 2] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            fr[a[i]]++;
        }
        for (int i = 0; i <= n; i++)
        {
            if (fr[i] == 0)
                m = i;
        }
        a[n] = m;
        // for (int i = 0; i <= n; i++)cout<<a[i];
        if (k > n)
            k = k % (n + 1);
        int x = n + 1 - k, it = 0;
        if (x == n + 1)
            x = 0;
        while (it < n)
        {
            cout << a[x] << " ";
            it++;
            x++;
            if (x == n + 1)
                x = 0;
        }
        cout << endl;
        
    }
    return 0;
}