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
        string s;
        cin >> s;
        string x = s;
        reverse(x.begin(), x.end());
        string ans = s + x;
        cout << ans << endl;
    }

    return 0;
}