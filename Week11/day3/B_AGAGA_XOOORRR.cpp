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
           int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      int pre[n];
      pre[0]=arr[0];
      for(int i=1;i<n;i++){
            pre[i]=(pre[i-1]^arr[i]);
      }
      bool flag=0;
      //for 2
      {
            for(int i=0;i<n-1;i++){
                  if(pre[i]==(pre[n-1]^pre[i])){
                        flag=1;
                        break;
                  }    
                        
            }
      }
      
      //for 3
      {
            for(int i=0;i<n-2;i++){
                  int st=pre[i];
                  for(int j=i+1;j<n-1;j++){
                        int mid=pre[j]^pre[i];
                        int en=pre[n-1]^pre[j];
                        if(st==mid and mid==en){
                              flag=1;
                              break;
                        }
                  }
                  if(flag)break; 
            }
      }
            
      if(flag){
            cout<<"YES";
      }
      else{
            cout<<"NO";
      }
             
      cout<<endl;
    }

    return 0;
}