#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    int test = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 1; j < n; j++)
        {
            if (s[j] == '1' && s[j+1] == '0' && s[j-1] == '0') {
                test = 1;
            }
        }
    }
    if(test) {
        cout << "TRIANGLE" << '\n';
    } else {
        cout << "SQUARE" << '\n';
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