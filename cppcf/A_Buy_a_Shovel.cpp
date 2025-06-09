#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k , r, n = 1;
    cin >> k >> r;
    while((n*k) % 10 != r && (n*k) % 10 != 0) {
            n++;
        }    
        cout << n;
}


int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}