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
        ll x;
        cin >> x;
        ll a, b, c;
        if (x == 2)
            a = 1, b = 1, c = 1;
        else if (x > 1000000 && x % 1000000 == 0)
        {
            a =1000000;
            b=x/1000000-1;
            c=1000000;
        }
        else if (x > 1000000 )
        {
            a =1000000;
            b=x/1000000;
            c=x%1000000;
        }
        else if (x % 2 == 0)
        {
            a = 2;
            b = x / 2 - 1;
            c = 2;
        }
        else
        {
            a = 2;
            b = x / 2;
            c = 1;
        }
        if (x == 1)
            cout << -1 << endl;
        else
            cout << a << " " << b << " " << c << endl;
    }

    return 0;
}