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
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        s[i]=tolower(s[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o'||s[i]=='y')continue;
            v.push_back(s[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << '.';
        cout << v[i];
    }
    return 0;
}