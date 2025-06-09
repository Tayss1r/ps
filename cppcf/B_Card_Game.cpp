#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int win_count = 0;
    
    // Check all 4 possible combinations of flips
    if ((a1 > b1) + (a2 > b2) > (b1 > a1) + (b2 > a2)) {
        win_count++;
    }
    if ((a1 > b2) + (a2 > b1) > (b2 > a1) + (b1 > a2)) {
        win_count++;
    }

    cout << win_count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
