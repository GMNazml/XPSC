#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

const int mx = 1e4 + 123;
vector<int> adjList[mx];
int lev[mx];

void bfs(int s)
{
    memset(lev, -1, sizeof(lev));
    lev[s] = 0;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adjList[u])
        {
            if (lev[v] == -1)
            {
                lev[v] = lev[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        for (int i = 0; i < mx; i++)
            adjList[i].clear();
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        bfs(1);
        cout << lev[n] << endl;
    }

    return 0;
}