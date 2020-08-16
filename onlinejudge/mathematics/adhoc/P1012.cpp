// 10071 - Back to High School Physics
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1012

#include <iostream>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int v, t;
    while (cin >> v >> t) {
        cout << 2*v*t << endl;
    }
    return 0;
}