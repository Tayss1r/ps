#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

int gcd(long a, long b) {
        return __gcd(a, b); 
    }

void solve() {
    long long x, y,z,a,b;
    int sum = 0;
    cin >> x >> y >> z >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (gcd(i,x) == 1 || gcd(i,y) == 1  || gcd(i,z) == 1) {
            sum+=1;
        }
    }
    cout << sum << '\n';
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}