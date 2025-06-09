#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define fori(t) for (int i = 0; i < t; i++)
#define rev(t) reverse(t.begin(), t.end());
using namespace std;

void solve() {
    long long d = 0;
    string str,s;
    cin >> str;
    map<char, string> m = { {'>', "1000"}, {'<', "1001"},{'+', "1010"},{'-', "1011"},{'.', "1100"},{',', "1101"},{'[', "1110"},{']', "1111"}};
    fori(str.length()) {
        s += m[str[i]];
    }
    const int MOD = 1000003;
    fori(s.length()) {
        d = (d * 2 + (s[i] - '0')) % MOD;
    }
    cout << d;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}