#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> v(k,0);
    for (int i = 0; i < k; i++) {
        int b,c;
        cin >> b >> c;
        b--;
        v[b] += c;
    }
    sort(all(v), greater<>());
    cout << accumulate(v.begin(), v.begin() + min(n,k), 0) << endl;
    
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