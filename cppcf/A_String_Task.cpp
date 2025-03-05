#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string str , r = "";
    cin >> str;
    vector<char> v {'A','O','Y','E','U','I','a','o','y','e','u','i'};
    for (char c : v) {
        str.erase(remove(str.begin(), str.end(), c), str.end());
    }
    for (int i = 0 ; i<str.size(); i++) {
        r += '.';
        r += tolower(str[i]);
    }
 
    cout << r;
}