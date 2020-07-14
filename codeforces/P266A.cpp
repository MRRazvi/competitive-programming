#include <iostream>
using namespace std;

// A. Stones on the Table
// https://codeforces.com/problemset/problem/266/A
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<n-1; i++) {
        if (s[i] == s[i+1])
            count++;
    }
    cout << count << endl;
    return 0;
}
