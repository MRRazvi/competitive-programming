// A. Maximum GCD
// https://codeforces.com/contest/1370/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n%2 != 0)
            n -= 1;
        cout << __gcd(n/2, n) << endl;
    }
    return 0;
}