//
// Created by Srinath Balaji on 12/23/25.
//
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x: a) {
        cin >> x;
    }
    int s = 0;
    for (int i = 0; i < n - 1; i++) {
        s += abs(a[i] - a[i + 1]);
    }
    int res = s;
    for (int i = 0; i < n; ++i) {
        int cur = s;
        if (i - 1 >= 0) {
            cur -= abs(a[i - 1] - a[i]);
        }
        if (i + 1 < n) {
            cur -= abs(a[i + 1] - a[i]);
        }
        if (i + 1 < n && i - 1 >= 0) {
            cur += abs(a[i - 1] - a[i + 1]);
        }
        res = min(res, cur);
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
