#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        string s, s1 = "meowm";
        cin >> s;
        int j = 0, f = 0;
        for (int i = 0; i < n; i++)
        {
            s[i]=tolower(s[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if(j>3) j=0;
            if (s[i] == s1[j])
            {
                continue;
            }
            else
            {
                if ((s[i] != s1[j + 1])||s[i-1]!=s1[j])
                {
                    f = 1;
                    break;
                }
                else
                {
                    j++;
                }
            }
        }
        if(s[n-1]!=s1[3]){
            f=1;
        }
        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}