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
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        int tmp1 = n - k + 1;
        int tmp2 = n - 2 * (k - 1);
        if (tmp1 % 2 != 0 && tmp1 > 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                ans.push_back(1);
            }
            ans.push_back(tmp1);
            for (auto u : ans)
                cout << u << " ";
            cout << endl;
        }
        else if (tmp2 % 2 == 0 && tmp2 > 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                ans.push_back(2);
            }
            ans.push_back(tmp2);
            for (auto u : ans)
                cout << u << " ";
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}