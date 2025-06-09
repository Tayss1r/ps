#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    auto ans = [](int x) {
        string s = to_string(x);
        s.erase(remove(s.begin(), s.end(), '0'), s.end()); 
        return s;
    };
    cout << (ans(a + b) == to_string(stoi(ans(a)) + stoi(ans(b))) ?"YES":"NO") <<ln;
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