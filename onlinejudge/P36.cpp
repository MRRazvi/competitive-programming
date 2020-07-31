// 100 - The 3n + 1 problem
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

ll countCyclicLength(ll num) {
    ll count = 1;
    while (num != 1) {
        if (num%2 == 0) num /= 2;
        else num = num*3+1;
        count++;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll i, j;
    while (cin >> i >> j) {
        vector<ll> v;
        if (i < j) {
            for (ll k=i; k<=j; k++) {
                v.push_back(countCyclicLength(k));
            }
        } else {
            for (ll k=i; k>=j; k--) {
                v.push_back(countCyclicLength(k));
            }
        }
        sort(v.rbegin(), v.rend());
        cout << i << " " << j << " " << v[0] << endl;
    }
    return 0;
}