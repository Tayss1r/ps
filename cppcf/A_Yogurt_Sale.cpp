#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    if (b < a*2) {
        int p = n / 2;
        int r = n % 2;
        cout << p*b + r*a << endl;
    } else {
        cout << n * a << endl;
    }
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