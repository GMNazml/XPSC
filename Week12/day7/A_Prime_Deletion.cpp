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
        int x;
        cin >> x;
        int a[9], i = 0;
        while (x > 0)
        {
            a[i] = x % 10;
            x = x / 10;
            i++;
        }
        int p, ans = -1,f;
        reverse(a, a + 9);
        for (int i = 0; i < 8; i++)
        {
            for (int j = i+1; j < 9; j++)
            {
                p=a[i]*10+a[j];
                f=0;
                for(int k=2;k<=sqrt(p);k++){
                    if(p%k==0){
                       f=1;
                        break;
                    }
                }
                if(f==0){
                    ans=p;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}