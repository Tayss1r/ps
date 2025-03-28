#include <bits/stdc++.h>
#define all(t) t.rbegin(),t.rend()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());

    for (int i = 0; i < n - 2; i++) {
        if (s[i] + s[i+1]>s[i+2]) {
            cout << "YES" <<ln;
            return;
        }
    }
    cout << "NO" <<ln;
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