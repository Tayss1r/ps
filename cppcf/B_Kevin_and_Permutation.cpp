#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k) {
    vector<int> perm(n);

    // If k == 1, the optimal permutation is just the natural order.
    if (k == 1) {
        for (int i = 1; i <= n; i++) {
            perm[i - 1] = i;
        }
    } else {
        // For general cases where k > 1:
        // We want to arrange the permutation such that smaller numbers appear frequently in the subarrays.
        // We start by placing smaller numbers at the beginning in a way that they will be the minimum for multiple subarrays.
        int current = 1;
        for (int i = 0; i < n; i++) {
            perm[i] = current++;
        }
    }

    // Output the permutation
    for (int i = 0; i < n; i++) {
        cout << perm[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
