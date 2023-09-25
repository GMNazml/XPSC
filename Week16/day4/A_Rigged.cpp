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
        int n, temp,f=1;
        cin >> n;
        pair<int, int> p;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        p.first = v[0].first, p.second = v[0].second;
        for (int i = 1; i < n; i++)
        {
            if (p.second <= v[i].second&&p.first<=v[i].first)f=0;
                
        }
        if (f==1)
            cout << p.first << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}