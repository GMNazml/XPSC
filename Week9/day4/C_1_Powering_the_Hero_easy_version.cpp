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
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        ll ans = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(s[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}