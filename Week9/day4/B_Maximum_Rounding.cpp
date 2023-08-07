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
        string s, s1;
        cin >> s;
        char ch = '0';
        s1 = s;
        int f = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (i == 1 && s[i] > '4' && s[i - 1] == '9')
            {
                //cout << "x" ;
                ch = '1';
            }
            else if (i == 0 && s[i] > '4')
            {
                ch = '1';
               // cout << "z";
            }
            else if (s[i] > '4')
            {
                //cout << "y";
                s[i - 1]++;
                s[i] = '0';
            }
        }
        if (ch == '1')
        {
            cout << ch;
            for (int i = 0; i < s.size(); i++)
                cout << 0;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (f == 1)
                    cout << 0;
                else if (s1[i] < s[i])
                {
                    cout << s[i];
                    f = 1;
                }
                else
                    cout << s1[i];
            }
        }
        cout << endl;
    }

    return 0;
}