#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n, m, count = 0;
    char s;
    cin >> n >> m;
    map<char, int> map;
    for (int i = 0; i < n; i++) {
        cin >> s;
        map[s]++;
    }
    for(auto& it : map) {
        if (it.second < m) {
            count += m-it.second;
        }
    }
    int all = count + (7-map.size())*m;
    cout << all << endl;
    
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