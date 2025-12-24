//
// Created by Srinath Balaji on 12/23/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x: a) {
        cin >> x;
    }
    sort(a.begin(), a.end());
    int minn = a[0];
    int minn1 = a[1] / 2;
    if (minn1 < minn) {
        cout << minn << endl;
        return;
    }
    cout << a[1] - a[0] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
