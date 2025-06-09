#include <bits/stdc++.h>
#define all(t) t.begin(), t.end()
#define rev(t) reverse(t.begin(), t.end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
using namespace std;

bool palindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n /2; i++) {
        if (s[i] != s[n-i-1]) return false;
    }
    return true;
}

void solve() {
    string s;
    cin >> s;
    string s1 = "a"+s,s2 = s+"a";
    if (!palindrome(s1)) {
        YES;
        cout << s1 << endl;
    } else if (!palindrome(s2)) {
        YES;
        cout << s2 << endl;
    } else {
        NO;
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
