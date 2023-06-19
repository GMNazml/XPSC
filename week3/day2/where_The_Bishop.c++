#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c[9][9];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> c[i][j];
            }
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (c[i][j] == '#')
                {
                    if (c[i - 1][j - 1] == '#' && c[i - 1][j + 1] == '#' && c[i + 1][j - 1] == '#' && c[i + 1][j + 1] == '#')
                    {
                        int x = i + 1;
                        int y = j + 1;
                        cout << x << " " << y << endl;
                        break;
                    }
                }
            }
        }
    }
}