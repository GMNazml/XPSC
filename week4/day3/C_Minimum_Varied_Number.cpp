#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tst;
    cin >> tst;
    while (tst--)
    {
        int s;
        cin >> s;
        stack<int> q;
        int x = 9;
        while (s > 0)
        {
            if (s - x > 0)
            {
                s -= x;
                q.push(x);
                //cout<<x;
                x--;
                
            }
            else
            {
                q.push(s);
                //cout<<s;
                break;
            }
        }
        ///cout<<endl;
        while(!q.empty())
        {
            cout << q.top();
            q.pop();
        }
        cout << endl;
    }

    return 0;
}