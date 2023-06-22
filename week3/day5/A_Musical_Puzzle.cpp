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
        string s;
        cin>>s;
        set<string>st;
        for(int i=0;i<n-1;i++){
           string temp;
           temp.push_back(s[i]);
           temp.push_back(s[i+1]);
           st.insert(temp);
        }
        cout<<st.size()<<endl;
    }

    return 0;
}