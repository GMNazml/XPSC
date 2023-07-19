#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    if (a[0] <= 'z' && a[0] >= 'a')
        a[0] = toupper(a[0]);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
}