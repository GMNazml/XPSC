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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = n;

        ll s_Sum = 0;

        for (int i = 0; i < n; i++)
        {
            s_Sum += a[i];
            ll sum = 0;
            int len = 0, mxLen = i + 1;
            bool possible = false;
            for (int j = i + 1; j < n; j++)
            {
                if (sum + a[j] > s_Sum)
                {
                    break;
                }
                if (j == n - 1 and sum + a[j] == s_Sum)
                {
                    mxLen = max(mxLen, len + 1);
                    possible = true;
                    break;
                }
                sum += a[j];
                len++;
                if (sum == s_Sum)
                {
                    mxLen = max(mxLen, len);
                    len = 0;
                    sum = 0;
                }
            }
            if (possible)
            {
                ans = min(ans, mxLen);
            }
        }

        cout << ans << endl;
    }

    return 0;
}