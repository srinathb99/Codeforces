//
// Created by Srinath Balaji on 12/22/25.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> res;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') res.push_back(i + 1);
    }
    cout << res.size() << endl;
    for (const int re : res) {
        cout << re << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
