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
        string s = "314159265358979323846264338327", s1;
        cin >> s1;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s1[i])
            {
                cnt++;
            }
            else
                break;
        }
        cout << cnt << endl;
    }

    return 0;
}