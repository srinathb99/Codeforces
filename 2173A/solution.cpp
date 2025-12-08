/*
 * Created by Srinath Balaji on 12/8/25.
 * Problem Link: https://codeforces.com/contest/2173/problem/A
 * Submission: https://codeforces.com/contest/2173/submission/352603999
 */

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    string str;
    cin >> n >> k >> str;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        a[i] = str[i] - '0';
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            b[i] = 1;
            for (int j = i + 1; j < i + k + 1 && j < n; ++j) {
                b[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (!b[i]) {
            ++res;
        }
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
