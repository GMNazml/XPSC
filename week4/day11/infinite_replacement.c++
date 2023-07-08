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
        string s, t;
        cin >> s >> t;
        bool x = false;
        if (t.size() == 1)
        {
            if (t[0] == 'a')
            {
                cout << 1 << endl;
            }
            else
            {
                ll ans = pow(2, s.size());
                cout << ans << endl;
            }
        }
        else if (t.size() > 1)
        {
            for (int i = 0; i < t.size(); i++)
            {
                if (t[i] == 'a')
                {
                    x = true;
                }
            }
            if (x)
            {
                cout << -1 << endl;
            }
            else
            {
                ll ans = pow(2, s.size());
                cout << ans << endl;
            }
        }
    }

    return 0;
}