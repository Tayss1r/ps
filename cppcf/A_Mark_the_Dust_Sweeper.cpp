#include <bits/stdc++.h>
#define all(t) t.begin(), t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (size_t i = 0; i < n-1; i++)
    {
        if(v[i] == 0 && ans>0) ans++;
        else ans +=v[i]; 
    }
    
    cout << ans<<ln;
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