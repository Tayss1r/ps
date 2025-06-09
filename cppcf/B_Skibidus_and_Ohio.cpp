#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i+1]) {
            cout << 1 << '\n';
            return;
        }
    }
    cout << s.length() << '\n';
    
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