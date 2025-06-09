#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n;
    string s,ans;
    cin >> n >> s;
    ans = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] == ans.back()) {
            i++;
            if (i < n) ans += s[i];
            
        }
    }
    cout << ans << '\n';
    

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