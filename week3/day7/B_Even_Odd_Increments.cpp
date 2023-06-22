#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        long long sum = 0;
        int evc = 0, oddc = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (a[i] % 2 == 0)
            {
                evc++;
            }
            else
                oddc++;
        }
        int evc1=evc;
        int oddc1=oddc;
        for (int i = 0; i < q; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x == 0)
            {
                sum += (evc * y);
                if(y%2!=0){
                    oddc+=evc;
                    evc=0;
                }
            }
            else{
                sum += (oddc * y);
                if(y%2!=0){
                  evc+=oddc;
                  oddc=0;
                }
            }
            cout << sum << endl;
        }
        // cout<<evc<<" "<<oddc<<endl;
        // cout<<sum<<endl;
    }

    return 0;
}