#include <bits/stdc++.h>
using namespace std;

int solve() {
    int t, n, count = 0, a , b;
    cin >> n >> t;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (t == a || t == b || t == 7-a || t == 7-b) {
            cout << "NO";
            return 0;
        }
        t = 7 - t;
    }
    cout << "YES";
    return 0;
    // or use cout << i == n ? "YES":"NO";
}

int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}