#include <bits/stdc++.h>
#define all(t) t.rbegin(),t.rend()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(7);

    for (int i = 0; i < 7; i++) {
        cin >> p[i];
    }
    int day = 0;
    while (n > 0) {
        n -= p[day];
        day = (day + 1)%7;
    }
    
    cout << (day == 0 ? 7:day) <<ln;
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