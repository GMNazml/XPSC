#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i;
    for (i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n>4)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}