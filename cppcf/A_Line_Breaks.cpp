#include <bits/stdc++.h>
using namespace std;
 
int solve() {
    int n,m, count = 0, sum =0;
    cin >> n >> m; 
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s.length());
    }
    if (m<v[0]) return 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (m < sum + v[i]) return count;
        else {
            sum += v[i];
            count++;
        }
    }
    return count;
    
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
       cout << solve() << endl;
    }
    return 0;
}