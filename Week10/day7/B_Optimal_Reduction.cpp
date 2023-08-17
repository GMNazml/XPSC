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
        int ar[n + 4];
        int mx = 0;
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] > mx)
            {
                mx = ar[i];
                ind = i;
            }
        }
        int ans = 0;
        for (int i = ind + 1; i < n; i++)
        {
            if (ar[i] > ar[i - 1])
            {
                ans = 1;
                break;
            }
        }
        for (int i = ind - 1; i >= 0; i--)
        {
            if (ar[i] > ar[i + 1])
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}