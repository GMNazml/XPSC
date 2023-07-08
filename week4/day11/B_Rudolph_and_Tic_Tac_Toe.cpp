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
        char a[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
        char ch='d';
        //cout<<ch;
        for(int i=0;i<3;i++){
            if(a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][0]!='.'){
                ch=a[i][0];
            }
        }
        for(int i=0;i<3;i++){
            if(a[0][i]==a[1][i]&&a[1][i]==a[2][i]&&a[0][i]!='.'){
                ch=a[0][i];
            }
        }
        if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]!='.'){
            ch=a[0][0];
        }
        if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!='.'){
            ch=a[0][2];
        }
        if(ch=='d') cout<<"DRAW"<<endl;
        else cout<<ch<<endl;
    }

    return 0;
}