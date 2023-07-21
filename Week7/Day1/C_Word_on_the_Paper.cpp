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
        char g[8][8];
        vector<char>w;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                  cin>>g[i][j];
            }
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
               if(g[i][j]!='.'){
                w.push_back(g[i][j]);
               } 
            }
        }
        for(auto u:w){
            cout<<u;
        }
        cout<<endl;
    }

    return 0;
}