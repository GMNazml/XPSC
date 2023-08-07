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
        int x[n];
        for (int i = 0; i < n; i++)
            cin >> x[i];
        priority_queue<ll> pq;
        ll power = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] != 0)
            {
                pq.push(x[i]);
            }
            else
            {
                if (pq.empty())
                    continue;
                power += pq.top();
                pq.pop();
            }
        }
        cout << power << endl;
    }

    return 0;
}