//
// Created by Srinath Balaji on 12/22/25.
//
#include <iostream>
#include <vector>

using namespace std;

bool bit_at(int x, int i) {
    return (x & (1 << i)) != 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    const int msb = 31 - __builtin_clz(a);
    const int max_a = (1 << (msb + 1)) - 1;
    if (b > max_a) {
        cout << -1 << endl;
        return;
    }
    vector<int> res;
    for (int i = 0; i < msb + 1; ++i) {
        if (bit_at(a, i) != bit_at(b, i)) {
            a ^= (1 << i);
            res.push_back(1 << i);
        }
    }
    cout << res.size() << endl;
    if (!res.empty()) {
        for (const int x: res) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
