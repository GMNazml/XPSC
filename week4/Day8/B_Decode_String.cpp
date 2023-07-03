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
        string arr;
        cin>>arr;
        stack<char>st;
        char ch;
        for(int j=n-1;j>=0;j--){
            if(arr[j]=='0'){
            if(arr[j-2]=='1')    
            ch=(arr[j-1]+(arr[j-2]+9));
            else ch=arr[j-1]+arr[j-2]+18;
              //cout<<ch;
              st.push(ch);
              j=j-2;
            }
            else{
                ch=arr[j]+48;
                st.push(ch);
                //cout<<ch;
            }
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }

    return 0;
}