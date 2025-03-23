#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int w,y;
    cin >> w >> y;

    int num = 7-max(w,y);
    int den = 6;
    int gcd = __gcd(num, den);
    num/=gcd;
    den/=gcd;
    cout << num << '/' << den << ln;
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