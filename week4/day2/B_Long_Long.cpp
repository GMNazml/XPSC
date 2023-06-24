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
        long long ans=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
           ans+=abs(a[i]); 
        }
        int f=1,cunt=0;
        for(int i=0;i<n;i++){
           if(a[i]<0){
            cunt++;
            while(i<n){
                if(a[i]>0){
                    break;
                }
                else{
                  i++;
                }
            }
           }
        }
        cout<<ans<<" "<<cunt<<endl;
    }
}