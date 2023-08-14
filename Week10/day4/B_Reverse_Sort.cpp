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
        string temp = s;
        sort(temp.begin(), temp.end());
        vector<int> ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != temp[i])
            {
                ans.push_back(i + 1);
            }
        }
        if (ans.size() != 0)
        {
            cout << 1 << endl;
        }
        cout << ans.size() << " ";
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}