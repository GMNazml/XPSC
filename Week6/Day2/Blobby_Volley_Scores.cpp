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
        string s;
        cin >> s;
        int a = 0, b = 0, as = 1, bs = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A' && as == 1)
                a++;
            else if (s[i] == 'A')
            {
                as = 1;
                bs = 0;
            }
            else if (s[i] == 'B' && bs == 1)
                b++;
            else
            {
                bs = 1;
                as = 0;
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}