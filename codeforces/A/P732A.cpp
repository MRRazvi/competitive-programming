// A. Buy a Shove
// https://codeforces.com/contest/732/problem/A
// 15 mint avg

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
    freopen("output.txt", "w", stdout);

    int k, r;
    cin >> k >> r;

    if (k%10==r) {
        cout << 1 << endl;
    } else {
        int i = 0;
        while (true) {
            i++;
            if ((k*i)%10 == 0 || (k*i)%10 == r)
                break;
        }
        cout << i << endl;
    }
    return 0;
}