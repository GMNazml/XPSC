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
        int n, k, z = 0;
        cin >> n >> k;
        int a[n];
        stack<int> s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        s[z].push(a[0]);
        int x;

        for (int i = 1; i < n; i++)
        {
            x = s[z].top();
            if (abs(x - a[i]) <= k)
            {
                s[z].push(a[i]);
            }
            else
            {
                z++;
                s[z].push(a[i]);
            }
        }
        int mx=0,q;
        mx=max(mx,n);
        for(int i=0;i<=z;i++){
            q=s[i].size();
          if(mx<q)mx=q;
        }
        int ans = n - mx;
        cout << ans << endl;
    }

    return 0;
}