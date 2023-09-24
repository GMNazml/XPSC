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
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> a[i][j];
            }
        }
        int p = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X' && (i == 0 || i == 9 || j == 0 || j == 9))
                    p++;
                else if (a[i][j] == 'X' && (i == 1 || i == 8 || j == 1 || j == 8))
                    p += 2;
                else if (a[i][j] == 'X' && (i == 2 || i == 7|| j == 2 || j == 7))
                    p += 3;
                else if (a[i][j] == 'X' && (i == 3 || i == 6 || j == 3 || j == 6))
                    p += 4;
                else if(a[i][j]=='X')p+=5;    
            }
        }
        cout<<p<<endl;
    }

    return 0;
}