// B. Two Arrays And Swaps
// https://codeforces.com/problemset/problem/1353/B
// 15 mint avg
// greedy, array, sort, implementation

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i: a)
            cin >> i;
        vector<int> b(n);
        for (auto &i: b)
            cin >> i;

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        int ans = 0;
        for (int i=0; i<n; i++) {
            if (i < k)
                ans += max(a[i], b[i]);
            else
                ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}