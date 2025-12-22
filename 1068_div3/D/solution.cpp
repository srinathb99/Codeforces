//
// Created by Srinath Balaji on 12/22/25.
//
#include <iostream>
#include <cassert>

using namespace std;

int ask(const int l, const int r, const string& which) {
    cout << (which == "orig" ? 1 : 2) << " " << l + 1 << " " << r << endl;
    int res = 0;
    cin >> res;
    return res;
}

int find_left(const int l, const int r) {
    assert(l < r);
    if (l == r - 1) return l;
    const int mid = (l + r) / 2;
    const int orig_sum = ask(l, mid, "orig");
    if (const int chg_sum = ask(l, mid, "chg"); orig_sum != chg_sum) {
        return find_left(l, mid);
    }
    return find_left(mid, r);
}

void solve() {
    int n;
    cin >> n;
    const int l = find_left(0, n);
    const int tot_sum = ask(0, n, "orig");
    const int tot_chg_sum = ask(0, n, "chg");
    const int diff = tot_chg_sum - tot_sum;
    const int r = l + diff - 1;
    cout << "! " << l + 1 << " " << r + 1 << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
