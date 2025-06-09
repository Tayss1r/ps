#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        sum += abs(a);
    }
    cout << sum << '\n';
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