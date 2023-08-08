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
        bool flag = false;
        for (int i = 0; i <= 150; i++)
        {
            int left = n - 7 * i;
            for (int j = 0; j <= 250; j++)
            {
                int Left = left - 5 * j;
                if (Left >= 0 && Left % 3 == 0)
                {
                    flag = true;
                    cout << (Left / 3) << " " << j << " " << i << endl;
                    break;
                }
            }
            if (flag)
                break;
        }
        if(!flag)
        cout << -1 << endl;
    }

    return 0;
}