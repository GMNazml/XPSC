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
        int x;
        cin >> x;
        int y = x, cunt = 0, ans=-1;
        if (x % 2 == 0)
            ans = 0;
        else
        {
            while (y > 0)
            {
                cunt++;
                if ((y % 10) % 2 == 0)
                    ans = 2;
                y = y / 10;
            }
        }
         y=(x / pow(10, (cunt - 1)));
        //cout << cunt << " " << y << " ";

        if (y%2 == 0&&ans!=0)
            ans = 1;

        cout << ans << endl;
    }

    return 0;
}