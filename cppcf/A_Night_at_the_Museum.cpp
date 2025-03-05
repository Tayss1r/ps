#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    int sum = 0, current = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {   
        int index = str[i] - 97; 
        int walk = abs(current - index); 
        if (walk > 13) sum += 26 - walk;
        else sum += walk;
        current = index;
    }
    cout << sum;
}

int main() {
    solve();
    return 0;
}