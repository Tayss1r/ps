#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);


double distance(int a, int b, int c, int d) {
    double L = sqrt((c - a) * 1.0 * (c - a) + (d - b) * 1.0 * (d - b));
    return (L == 0.0) ? 0.0 : L / sqrt(6.0);
}

int main() {
    FAST_IO;
    int T;
    cin >> T;

    cout << fixed << setprecision(6);
    
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << distance(a, b, c, d) << "\n";
    }
    
    return 0;
}
