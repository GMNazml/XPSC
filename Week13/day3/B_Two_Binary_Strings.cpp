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
        string a, b;
        cin >> a >> b;
        int f=0;
        int in = 0;
        for (int i = 0; i < a.size() - 1; i++)
            if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1')
                f=1;

        if (f==1)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}