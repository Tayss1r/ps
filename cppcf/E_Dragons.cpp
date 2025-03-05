#include <bits/stdc++.h>
#define all(t) t.begin(), t.end()
#define rev(t) reverse(t.begin(), t.end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
using namespace std;

void solve() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i].first >> d[i].second;
    }
    sort(all(d));
    bool ans = true;
    for (int i = 0; i < n; i++) {
        if (s <= d[i].first) {
            ans = false;
            break;
        }
        s += d[i].second;
    }
    if (ans) {
        YES;
    } else {
        NO;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}