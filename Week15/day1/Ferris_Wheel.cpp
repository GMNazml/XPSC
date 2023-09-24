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
    int a, b;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    int x = 0, y = a - 1, ans = 0;
    sort(arr,arr+a);
    while (x <= y)
    {
        if (arr[x] + arr[y] <= b)
            x++;
        y--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}