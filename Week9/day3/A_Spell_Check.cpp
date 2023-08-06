#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f = 0;
        int fr[150]={0};
        for (int j = 0; j < n; j++)
        {
            fr[s[j]]++;
            if (s[j] != 'T' && s[j] != 'i' && s[j] != 'm' && s[j] != 'u' && s[j] != 'r' )
            {
                f = 1;
                break;
            }
            else if (fr[s[j]] > 1)
            {
                f = 1;
                break;
            }
        }
        if (f == 0&&n==5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}