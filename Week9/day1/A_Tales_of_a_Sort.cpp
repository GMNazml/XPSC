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
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(v.rbegin(), v.rend());
        int j = n - 1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            //cout << v[i] << " ";
            if (j == 0)
                break;
            if (a[j] == v[i])
            {
                j--;
            }
            else
            {
                ans = v[i];
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}