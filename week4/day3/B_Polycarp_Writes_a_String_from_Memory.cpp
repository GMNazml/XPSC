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
        string s;
        cin>>s;
        map<char,int>m;
        int c=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==0){
                c++;
                m[s[i]]++;
            }
            if(c>3){
                c=1;
                ans++;
                m.clear();
                m[s[i]]++;
            }
        }
        if(c>0) ans++;
        cout<<ans<<endl;
        
    }
    

    return 0;
}