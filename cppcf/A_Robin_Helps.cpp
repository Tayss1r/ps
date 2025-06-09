#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    int donation = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {   
        int a;
        cin >> a;
        if (a>=k) donation+=a;
        else if(a == 0 && donation > 0) {
            donation--;
            ans++;
        }
    }
    cout << ans << endl;
    
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