#include <bits/stdc++.h>
#define all(t) t.rbegin(),t.rend()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n, s,d,ans = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s >> d;
        if (ans<s) ans = s;
        else ans = s+((ans - s + d)/d)*d;
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