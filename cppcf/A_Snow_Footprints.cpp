#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string str;
    cin >> n;
    cin >> str;

    int startr = str.find('R');
    int startl = str.find('L');
    int endl = str.find_last_of('L');
    int endr = str.find_last_of('R');

    if (startr != string::npos && endr != string::npos) cout << startr + 1 << ' ' << endr + 2;
    else cout << endl + 1 << ' ' << startl;

}

int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
