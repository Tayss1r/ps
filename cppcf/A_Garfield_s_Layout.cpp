#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    char str;
    string rts;
    cin >> str >> rts;
    
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int direc = (str == 'R') ? -1 : 1;
    
    for (int i = 0; i < rts.size(); i++) {
        cout << key[key.find(rts[i])+direc];
    }
    cout << ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}