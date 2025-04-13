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
    int test = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(v[i]>v[i-1] && v[i] > v[i+1]) {
            cout << "YES" <<ln << i << " " << i+1 << " " << i+2 <<ln;
            test = 1;
            break;
        }
    }
    if (test == 0) {
        cout << "NO" <<ln;
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