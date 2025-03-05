#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a4 >> a5;
    map<int, int> map;
    map[a1+a2]++;
    map[a4-a2]++;
    map[a5-a4]++;
    int ans = 0;
    for(auto &it:map) {
        ans = max(it.second, ans);
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