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
        int a, b, c;
        cin >> a >> b >> c;
        int x, y;
        x = a - 1;
        if (b < c)
            y = (c - b) + (c - 1);
        else
            y = b - 1;
        if (x < y)
            cout << "1" << endl;
        else if (y < x)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }

    return 0;
}