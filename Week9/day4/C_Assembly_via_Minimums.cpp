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
        int x = (n - 1) * n / 2;
        ll mx = -1 * 1000000000;
        int a[x];
        vector<int> v;
        unordered_map<int, int> mp;
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        int q = n - 1,mn=1000000000;
        for (int i = 0; i < x; i++)
        {
            
            mp[a[i]]++;
            if (mp[a[i]] == 1)
                v.push_back(a[i]);
            if (mp[a[i]] > q)
            {
                if(mn>a[i])
                //cout<<"x"<<mp[a[i]];
               v.push_back(a[i]);
                q--;
                mp[a[i]] = 1;
            }
            
        }
        for (auto u : v)
        {
            cout << u << " ";
            if (u > mx)
                mx = u;
        }
        for (int i = 0; i < n - v.size(); i++)
        {
            cout << mx << " ";
        }
        cout << endl;
    }

    return 0;
}