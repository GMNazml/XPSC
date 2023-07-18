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
        int f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(s[i]!=s[i+1]&&s[i]==s[i+2]&&i+2<n){
                f++;
                i+=2;
                if(s[i]==s[i+3]&&i+3<n) f++;
            }
            else if (s[i] != s[i + 1])
            {
                f++;
                i++;
                if(s[i-1]==s[i+2]&&i-1>-1&&i+2<n)f++;
            }
        }
        //cout<<f;
        if (f % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }

    return 0;
}