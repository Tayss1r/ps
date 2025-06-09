#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'

using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    if (a>b) swap(a,b);
    cout << pow(min(max(2*b,a),max(b,2*a)),2) << ln;
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