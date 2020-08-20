// A. Pashmak and Garden
// https://codeforces.com/contest/459/problem/A
// 30 mint avg
// math, geometry, implementation

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        int side = abs(y2-y1);
        x3 = x1+side;
        x4 = x2+side;
        y3 = y1;
        y4 = y2;
    } else if (y1 == y2) {
        int side = abs(x2-x1);
        x3 = x1;
        x4 = x2;
        y3 = y1+side;
        y4 = y2+side;
    } else if (abs(x2-x1) == abs(y2-y1)) {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    } else {
        cout << -1 << endl;
        return 0;
    }
    printf("%d %d %d %d\n", x3, y3, x4, y4);
    return 0;
}