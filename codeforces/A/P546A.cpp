// A. Soldier and Bananas
// https://codeforces.com/problemset/problem/546/A
#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int cost = 0;
    for (int i=0; i<w; i++) {
        cost += k * (i+1);
    }
    if (cost > n)
        cout << abs(cost - n);
    else
        cout << 0;
    cout << endl;
    return 0;
}