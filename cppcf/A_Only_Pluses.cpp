#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    int n = 5, m;
    while (n--) {
        m = *min_element(all(v));
        auto it = find(all(v), m);
        *it = m + 1;
    }
    cout << accumulate(all(v), 1, multiplies<int>()) << endl;
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