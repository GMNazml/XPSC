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
    int tst;
    cin >> tst;
    while (tst--)
    {
        string s;
        cin >> s;
        int f = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {

            if (s[i] == 'Y' && s[i + 1] != 'e')
            {
                f = 1;
                break;
            }
            else if (s[i] == 'e' && s[i + 1] != 's')
            {
                f = 1;
                break;
            }
            else if (s[i] == 's' && s[i + 1] != 'Y')
            {
                f = 1;
                break;
            }
            else if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
            {
                f = 1;
                break;
            }
        }
        int i=0;
        if (s[i] != 'Y' && s[i] != 'e' & s[i] != 's')
        {
            f = 1;
        }

        if (f == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}