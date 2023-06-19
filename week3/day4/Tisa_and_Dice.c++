#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int arr[n], x = 0, y;
        arr[0] = s - r;
        for (int j = 1; j < n; j++)
        {
            arr[j] = 1;
        }
        for (int j = 0; j < n; j++)
        {
            x += arr[j];
        }
        for (int z = 0; z < 6; z++)
        {
            for (int j = 1; j < n; j++)
            {
                if (x == s)
                {
                    break;
                }
                else
                {
                    arr[j]++;
                    x++;
                }
            }
        }
      for (int j = 0; j < n; j++)
        {
            cout<<arr[j]<<" ";
        } 
        cout<<"\n"; 
    }
}