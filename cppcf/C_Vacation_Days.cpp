#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n, k,q;
    cin >> n >> k >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int tay = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] <= q) tays++;
        else {
            if (tay >=k){
                ans += tay - k +1;
                tay = 0;
            } 
        }
    }


    if (tay >= k) ans += tay - k +1;

    cout << ans <<ln;
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