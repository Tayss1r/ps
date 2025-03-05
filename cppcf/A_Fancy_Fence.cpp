#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a;
    cin >> a;
    cout << ((360 % (180 - a) == 0) ? "YES":"NO"); 
    // or use puts to print string then new line
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}