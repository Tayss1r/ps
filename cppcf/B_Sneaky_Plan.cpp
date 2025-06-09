#include <bits/stdc++.h>
#define all(t) t.rbegin(),t.rend()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n, sum =0, mine = 0;
    cin >> n;
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i], sum += c[i];
    }
    sort(all(c));

    for (int i = 0; i < n ; i++) {
        mine += c[i];
        if (mine > sum/2) {
            cout << i+1 <<ln;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t= 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}