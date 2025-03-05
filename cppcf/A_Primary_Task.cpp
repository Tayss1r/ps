#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int a;
    cin >> a;
    cout << ((to_string(a).length() >= 3 && to_string(a).substr(0,2) == "10" && to_string(a)[2] != '0' && stoi(to_string(a).substr(2))>=2) ? "YES":"NO") << endl;//LOL
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