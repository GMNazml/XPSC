#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        if (n % 2) cout << -1 << '\n';
        else {
            int j = 1;
            for (int i = n; i > 0; i--) {
                if (i % 2) {
                    cout << j << ' ';
                    j += 2;
                }
                else cout << i << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}