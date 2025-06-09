#include <bits/stdc++.h>
#define all(t) t.begin(), t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int ans = k, count=0;
    for (size_t i = 0; i < k; i++)
    {
        if (s[i] == 'W') {
            count++;
        }
        
    }
    ans = count;
    for (size_t i = k; i < n; i++)
    {
        if (s[i-k] == 'W') {
            count--;
        }
        if (s[i]=='W') {
            count ++;
        }
        ans = min(ans, count);
    }
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