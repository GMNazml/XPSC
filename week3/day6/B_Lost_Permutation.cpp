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
        int n, s;
        cin >> n >> s;
        int a[n];
        int fr[100] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            fr[a[i]]++;
        }
        int max = *max_element(a, a + n);
        for (int i = 1; i < max; i++)
        {
            if (fr[i] == 0)
                s -= i;
        }
        int f = 0;
        for (int i = max + 1; i < 10000000; i++)
        {
            
            // cout << s;
            if (s == 0)
            {
                f = 1;
                break;
            }
            else if (s < 0)
                break;
            s -= i;    
        }
        if (f == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}