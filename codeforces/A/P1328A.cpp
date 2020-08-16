// A. Divisibility Problem
// https://codeforces.com/problemset/problem/1328/A
// 2 mint avg
// math, brute force

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int moves = 0;
        while (a%b != 0) {
            a++;
            moves++;
        }
        cout << moves << endl;
    }
    return 0;
}