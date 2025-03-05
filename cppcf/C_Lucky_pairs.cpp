#include <bits/stdc++.h>
#define all(t) t.begin(),t.end()
#define rev(t) reverse(t.begin(), t.end())
using namespace std;

bool is_palindrome(int num) {
    string num_str = to_string(num);
    int left = 0, right = num_str.size() - 1;
    while (left < right) {
        if (num_str[left] != num_str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int countP(int n, const vector<int>& arr) {
    int count = 0;
    unordered_map<int, int> seen;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int res = arr[i] ^ arr[j];
            if (is_palindrome(res)) {
                count++;
            }
            if (i != j) {
                seen[arr[j]]++;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = countP(n, arr);
    cout << result << endl;
    return 0;
}