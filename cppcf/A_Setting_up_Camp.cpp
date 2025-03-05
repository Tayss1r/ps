#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int64_t a,b,c;
    cin>>a>>b>>c;
    if(c < (3-b%3)%3) {cout << -1 <<'\n';return;}
    cout << a+(b+c+2)/3 << '\n';

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