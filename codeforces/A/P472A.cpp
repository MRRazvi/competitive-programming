// A. Design Tutorial: Learn from Math
// https://codeforces.com/problemset/problem/472/A
// 10 mint avg
// math, composite number, implementation

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

bool is_composite(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return false;
    if (n%2 == 0 || n%3 == 0)
        return true;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return true;

    return false;
}

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    for (int i=2; i<=n; i++) {
        for (int j=2; j<=n; j++) {
            if (is_composite(i) && is_composite(j)) {
                if (i+j == n) {
                    cout << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}