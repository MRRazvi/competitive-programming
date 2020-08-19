// A. Cheap Travel
// https://codeforces.com/problemset/problem/466/A
// 10 mint avg
// math

#include <iostream>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m*a <= b)
        cout << n*a;
    else
        cout << (n/m)*b + min((n%m)*a, b);
    cout << endl;
    return 0;
}