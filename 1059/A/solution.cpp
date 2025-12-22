//
// Created by Srinath Balaji on 12/22/25.
//
#include <algorithm>
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
    cout << *max_element(a.begin(), a.end()) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
