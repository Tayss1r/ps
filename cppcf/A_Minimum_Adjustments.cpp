#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 9999999
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) {
            ans = 0
        } else {
            ans = min(abs(v[i]), ans)
        }
    }
    cout << ans <<ln;
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