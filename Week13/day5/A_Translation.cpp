#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int j=s.size()-1,f=0;
    for(int i=0;i<s.size();i++){
          if(s[i]!=t[j]){
            f=1;
            break;
          }
          j--;
    }
    if(f==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}