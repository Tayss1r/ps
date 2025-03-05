#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n,p,k;
    cin >> n >> k >> p;
    k = abs(k);
    if (k > n * p) {
        cout << -1 << '\n';
        return;
    } else {
        cout << (k + p-1) /p << '\n';
    }
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