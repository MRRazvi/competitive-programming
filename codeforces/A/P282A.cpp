#include <iostream>
using namespace std;

// A. Bit++
// https://codeforces.com/problemset/problem/282/A
int main() {
    int n, count = 0;
    cin >> n;
    string x;
    for (int i=0; i<n; i++) {
        cin >> x;
        if (x.find("++") != string::npos)
            count++;
        else if (x.find("--") != string::npos)
            count--;
    }
    cout << count;
    return 0;
}
