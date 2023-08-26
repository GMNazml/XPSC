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
    int a[1000002] = {0};
    for (int i = 2; i <= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; j * i <= 1000000; j++)
            {
                a[j * i] = 1;
            }
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a1, x;
        cin >> a1;
        x = sqrt(a1);
        if (a1 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (x * x == a1 &&a[x]==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}