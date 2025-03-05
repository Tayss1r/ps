#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

void solve() {
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int cycle = a+b+c;
    int nbrc = n/(a+b+c);
    int sum = nbrc * cycle;
    int day = nbrc * 3;
    if (sum>=n) cout << day << endl;
    else if(sum+a >=n) cout << day+1 << endl; 
    else if(sum+a+b >=n) cout << day+2 << endl; 
    else if(sum+a+b+c >=n) cout << day+3 << endl; 
    
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