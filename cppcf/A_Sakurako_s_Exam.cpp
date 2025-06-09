#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << ((a > 0 && a % 2 == 0) || (a == 0 && b % 2 == 0) ? "YES":"NO") << endl;

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