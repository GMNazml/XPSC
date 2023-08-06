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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> r;
        int val, x;
        for (int i = 0; i < n - 1; i++)
        {
            val = v[i] - v[i + 1];
            if (val != 0)
            {
                if (r.size() > 0)
                {
                    x = r.back();
                    if ((x > 0 && val < 0) || (x < 0 && val > 0))
                    {
                        r.push_back(val);
                    }
                }
                else
                    r.push_back(val);
            }
        }
        cout << (1 + r.size()) << endl;
    }

    return 0;
}