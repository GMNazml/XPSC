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
    int f = 0, c = 1;
    for (int i = 1; i < s.size(); i++)
    {
        //cout<<c<<endl;
        
        if (s[i] == s[i - 1])
            c++;
        else
            c = 1;
        if (c == 7)
        {
            f = 1;
            break;
        }    
    }
    if (f == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}