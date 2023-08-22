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
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int m=a[0],l=a[0],c=0;
    for(int i =1;i<n;i++){
        if(a[i]>m){
            m=a[i];
            c++;
        }
        else if(a[i]<l){
            l=a[i];
            c++;
        }
    }
    cout<<c;
    return 0;
}