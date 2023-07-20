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
        ll sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            int j, k = 0,e=0;
            if (f = 0)
            {
                for (j = k; j < i + 2; j++)
                {
                    sum += a[j];
                    f = 1;
                }
            }
            else if (f = 1)
            {
                for (k = j; k < n; k++)
                {
                    sum += a[k];
                    if (sum % 3 == 0)
                    {
                        f = 0;
                        break;
                    }
                }
                else{
                    ans+=abs()
                }
            }
        }
    }

    return 0;
}