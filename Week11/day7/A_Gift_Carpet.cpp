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
        int n, m, c = 0;
        cin >> n >> m;
        char a[n][m];
        string s = "vika";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if(c>3)break;
                if (a[i][j] == s[c])
                {
                    c++;
                    break;
                }
            }
        }
        if (c>3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}