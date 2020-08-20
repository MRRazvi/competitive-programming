// A. Dreamoon and Stairs
// https://codeforces.com/problemset/problem/476/A
// 10 mint avg
// math, implementation

#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, m, x;
    cin >> n >> m;
    if (m > n)
        x = -1;
    else {
        if (n%2 == 0)
            x = n/2;
        else
            x = (n/2)+1;
        while (x%m != 0)
            x++;
    }

    cout << x << endl;
    return 0;
}
