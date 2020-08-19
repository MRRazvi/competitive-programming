// A. Ilya and Bank Account
// https://codeforces.com/problemset/problem/313/A
// 8 mint avg
// string, math, implementation

#include <iostream>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;

    if (n > 0) {
        cout << n << endl;
        return 0;
    }

    string s = to_string(n);
    string s1, s2;
    for (int i=0; i<s.size()-1; i++)
        s1.push_back(s[i]);
    for (int i=0; i<s.size(); i++) {
        if (i != s.size()-2)
            s2.push_back(s[i]);
    }

    if (s1 == "-0" || s2 == "-0")
        cout << 0 << endl;
    else
        cout << min(s1, s2) << endl;
    return 0;
}