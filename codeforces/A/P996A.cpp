// A. Hit the Lottery
// https://codeforces.com/problemset/problem/996/A
// 10 mint avg
// greedy, array, implementation

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int target, count;
    target = count = 0;
    vector<int> coins = {1, 5, 10, 20, 100};
    while (target < n) {
        int max = 0;
        for (int i=0; i<coins.size(); i++) {
            if (target + coins[i] <= n)
                max = coins[i];
        }
        target += max;
        count++;
    }
    cout << count << endl;
    return 0;
}