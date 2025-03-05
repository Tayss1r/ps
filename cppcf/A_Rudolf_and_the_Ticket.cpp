#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n,m,k;
    vector<int> v1, v2;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a<k) {
            v1.push_back(a);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        if (b<k) {
            v2.push_back(b);
        }
    }
    int ans = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] + v2[j] <= k) {
                ans++;
            }
        }
    }

    cout << ans << '\n';
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