#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    set<int> s1;

    for (int i = 0; i <= k; ++i) {
        s1.insert(i);
    }

    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        set<int> s2;
        for (int j = 0; j < str.length(); ++j) {
            s2.insert(str[j] - '0');
        }
        if (includes(s2.begin(), s2.end(), s1.begin(), s1.end())) count ++;
    }
    cout << count << endl;

    return 0;
}
