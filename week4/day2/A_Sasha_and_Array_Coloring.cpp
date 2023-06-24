#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n / 2] = {0};
        int j = n - 1;
        sort(a,a+n);
        for (int i = 0; i < n / 2; i++)
        {
            b[i] = a[j] - a[i];
            j--;
        }
        int ans=0;
        for (int i = 0; i < n / 2; i++)
        {
            ans+=b[i];
        }
        cout<<ans<<endl;
    }
}