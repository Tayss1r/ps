#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define fori(t) for (int i = 0; i < t; i++)
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

template <typename Map>
auto getLargestElement(const Map& myMap) -> decltype(*myMap.rbegin()) {
    return *myMap.rbegin();
}

int solve() {
    int m,a,b,c,sum = 0;
    cin >> m >> a >> b >> c;
    sum += min(a, m);
    sum += min(b, m);
    sum += min(2 * m - sum, c);
    return sum;
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