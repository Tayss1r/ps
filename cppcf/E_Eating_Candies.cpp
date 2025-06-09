#include <bits/stdc++.h>
#define all(t) t.begin(), t.end()
#define rev(t) reverse(t.begin(), t.end())
#define ln '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int c = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
        c+=v[i];
    }
    
    int left =0, right=n-1, ansl =0, ansr = 0, ans = 0;
    while (left<=right) {
        if (ansl < ansr) {
            ansl += v[left++];
        } else {
            ansr += v[right--];
        }
        if(ansl == ansr) {

        }
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