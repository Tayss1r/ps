#include <bits/stdc++.h>
#define all(t) t.begin(), t.end()
#define rev(t) reverse(t.begin(), t.end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
using namespace std;

void solve() {
    int n, pages[7];
    cin >> n;
    for (int i = 0; i < 7; i++) cin >> pages[i];

    int day = 0;
    while (n > 0) {
        n -= pages[day];
        day = (n > 0) ? (day+1) % 7:day;
    }
    cout << day + 1 << endl;
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
