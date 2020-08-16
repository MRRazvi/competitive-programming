// 10055 - Hashmat the Brave Warrior
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996

#include <iostream>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    ll a, b;
    while (cin >> a >> b) {
        cout << abs(b - a) << endl;
    }
    return 0;
}