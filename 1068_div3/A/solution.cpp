/*
 * Created by Srinath Balaji on 12/8/25.
 * Problem Link: https://codeforces.com/contest/2173/problem/A
 * Submission: https://codeforces.com/contest/2173/submission/352603999
 */

#include <cassert>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    string str;
    cin >> n >> k >> str;
    vector<int> a(n), pref(n);
    for (int i = 0; i < n; i++) {
        a[i] = str[i] - '0';
    }
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            pref[i]++;
            if (i + k + 1 < n) pref[i + k + 1]--;
        }
    }
    for (int i = 1; i < n; i++) {
        pref[i] += pref[i - 1];
    }
    const int res = accumulate(pref.begin(), pref.end(), 0,
        [](const int acc, const int val) {return val == 0 ? acc + 1 : acc;});
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
