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
        int n, a, b;
        cin >> n >> a >> b;
        string s = "abcdefghijklmnopqrstuvwxyz";
        int k = 0;
        string x;
        for (int i = 0; i < n; i++)
        {
            x.push_back(s[k]);
            k++;
            if (k == b)
                k = 0;
        }
        cout << x << endl;
    }

    return 0;
}
