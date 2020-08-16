// A. Candies and Two Sisters
// https://codeforces.com/problemset/problem/1335/A
// 5 mint avg
// math, implementation

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n%2==0) {
            cout << ((n/2)-1);
        } else {
            cout << n/2;
        }
        cout << endl;
    }
    return 0;
}