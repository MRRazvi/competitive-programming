// A. Choosing Teams
// https://codeforces.com/problemset/problem/432/A
// 5 mint avg
// greedy, array, implementation

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> y(n);
    for (auto &i: y)
        cin >> i;
    // sort(y.begin(), y.end());
    int count = 0;
    for (int i=0; i<n; i++) {
        if (y[i]+k <= 5)
            count++;
    }
    cout << ceil(count/3) << endl;
    return 0;
}