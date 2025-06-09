#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define fori(t) for (int i = 0; i < t; i++)
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    string str;
    cin >> str;
    rev(str);
    fori(str.length()) {
        if (str[i] == 'p') str[i] = 'q';
        else if (str[i] == 'q') str[i] = 'p';
    }
    cout << str << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}