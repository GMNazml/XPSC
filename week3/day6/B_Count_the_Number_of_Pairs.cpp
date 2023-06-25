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
        string s;
        cin >> s;
        ll ans = 0;
        map<char, int> freq;
        for (auto c : s)
        {
            freq[c]++;
        }
        for (char c = 'a'; c <= 'z'; c++)
        {
            int mn = min(freq[c], freq[(c - 32)]);
            ans += mn;
            freq[c] -= mn;
            freq[c - 32] -= mn;
        }
        for (char c = 'a'; c <= 'z'; c++)
        {
            int add = max(freq[c], freq[c - 32]);
            int mn = min(k, add / 2);
            ans += mn;
            k -= mn;
        }
        cout << ans << endl;
    }

    return 0;
}