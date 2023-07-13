#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++)cin>>a[i];
    sort(a,a+4);
    int a1,b,c;
    a1=a[3]-a[0];
    b=a[1]-a1;
    c=a[2]-a1;
    cout<<a1<<" "<<b<<" "<<c;
}