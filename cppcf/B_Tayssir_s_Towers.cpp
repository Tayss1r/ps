#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n;
    cin >> n;
    int v[1001] = {};
    int height = 0, tay = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v[a]++;
    }
    for (int i = 0; i <= 1000; i++) {
        if (v[i] > 0) {
            tay++;
            if (v[i] > height) {
                height = v[i];
            }
        }
    }
    cout << height << " " << tay;
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