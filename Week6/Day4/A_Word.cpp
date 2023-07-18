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
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a++;
        else
            b++;
    }
    if (a >= b)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    return 0;
}