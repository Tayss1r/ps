#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    char shift;
    string typed;
    cin >> shift >> typed;
    
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int direction = (shift == 'R') ? -1 : 1;
    
    for (size_t i = 0; i < typed.size(); i++) {
        cout << keyboard[keyboard.find(typed[i]) + direction];
    }
    cout << endl;
    
    return 0;
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