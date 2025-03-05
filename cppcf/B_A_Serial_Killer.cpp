#include <bits/stdc++.h>
#define all(t) t.begin(), t.end()
#define rev(t) reverse(t.begin(), t.end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    cout << a << " " << b << endl;
    while (n--) {
        string k, newp;
        cin >> k >> newp;
        if (a == k) a = newp;
        else b = newp;
        cout << a << " " << b << endl;
    }
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
