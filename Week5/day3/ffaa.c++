#include <bits/stdc++.h>
using namespace std;

random_device rnd; mt19937 rng(rnd());

int main () {
    cout << 1 << endl;
    cout << 2 << ' ' << 100000 << ' ' << 1000000 << '\n';
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 100000; ++j) {
            cout << i * 3 + 1 << " \n"[j == 99999];
        }
    }
}