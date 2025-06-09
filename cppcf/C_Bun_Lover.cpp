#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    vector<long long> results(t);
    
    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n; // Size of the cinnabon roll
        // Compute total length of the chocolate layer
        results[i] = 2 * n * n - 2 * n;
    }
    
    for (const auto& res : results) {
        cout << res << "\n";
    }

    return 0;
}
