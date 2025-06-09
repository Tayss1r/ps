#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int a, b,c;
    cin >> a >> b >> c;

    if (a<b && b<c) {
        cout << "STAIR" << '\n';
        return;
    } 
    if (a<b && b>c){
        cout << "PEAK" << '\n';
        return;
    } 
    cout << "NONE" << '\n';
    return;
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