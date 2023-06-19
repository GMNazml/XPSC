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
        map<int, int> m;
        for (int i = 1; i <= n; i++)
        {
            m[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int i = 1; i < n; i++)
            {
                int a;
                cin >> a;
                m[a] += i;
            }
        }
        // for (auto u : m)
        // {
        //     cout << u.first << " " << u.second << endl;
        // }
        vector<pair<int, int>> v;
        for (auto u : m)
        {
            v.push_back({u.second, u.first});
        }
        sort(all(v));
        for (int i = 0; i < v.size(); i++)
        {

            cout << v[i].second << " ";
        }

        cout << endl;
    }
    return 0;
}