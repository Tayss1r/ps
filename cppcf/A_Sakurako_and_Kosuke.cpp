#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n , x = 0, i = 1;
    cin >> n;
    string turn = "Sakurako";
    while (x >= -n && x <= n) {
        if (turn == "Sakurako") {
            x += -(2*i-1);
            turn = "Kosuke";
        }
        else {
            x += (2*i-1);
            turn = "Sakurako";
        }
        i++;
    }
    
    if (turn == "Sakurako") {
        cout << "Kosuke" << endl;
    } else {
        cout << "Sakurako" << endl;
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