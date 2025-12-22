//
// Created by Srinath Balaji on 12/16/25.
//

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    vector dp(n, vector<long long>(2));
    vector dp1 = dp;
    /*
     * dp[i][0] = max possible score if choosing red on i-th move = max(dp[i - 1][0], dp[i - 1][1][1]) - a[i]
     * dp[i][1] = max possible score if choosing blue on i-th move = b[i] - min(dp1[i - 1][0], dp1[i - 1][1])
     */
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long& x: b) {
        cin >> x;
    }
    dp[0][0] = -a[0], dp[0][1] = b[0];
    dp1[0][0] = -a[0], dp1[0][1] = b[0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]) - a[i];
        dp[i][1] = b[i] - min(dp1[i - 1][0], dp1[i - 1][1]);
        dp1[i][0] = min(dp1[i - 1][0], dp1[i - 1][1]) - a[i];
        dp1[i][1] = b[i] - max(dp[i - 1][0], dp[i - 1][1]);
    }
    cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
