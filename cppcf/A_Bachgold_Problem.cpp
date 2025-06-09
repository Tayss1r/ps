#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << n/2 << ln;
    for (int i = 1; i < n/2; i++)
    {
        cout << "2 ";
    }
    if (n%2 != 0) cout << "3" << ln;
    else cout << "2" << ln;
    
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