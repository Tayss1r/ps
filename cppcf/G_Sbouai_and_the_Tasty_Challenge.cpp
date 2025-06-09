#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        
        for (int i = 0; i < n; ++i) cin >> v1[i];
        for (int i = 0; i < m; ++i) cin >> v2[i];
        
        int i = 0, j = 0;
        bool test = true;
        
        while (i < n && j < m) {
            int sum = 0;
            while (i < n && sum < v2[j]) {
                sum += v1[i++];
            }
            if (sum != v2[j]) {
                test = false;
                break;
            }
            j++;
        }
        
        if (j == m) {
            cout << (test ? "YES" : "NO") << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
