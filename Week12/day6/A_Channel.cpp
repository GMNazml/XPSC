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
        int n, a, b, f = 0, p = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int x=a;
        for (int i = 0; i < b; i++)
        {
            if (n == a)
            {
                f = 1;
                break;
            }
            if (s[i] == '+')
            {
                a++;
                p++;
            }
            else
                a--;
            if (n == a)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "YES" << endl;
        else if (n <= x + p)
            cout << "MAYBE" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}