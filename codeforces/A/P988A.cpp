// A. Diverse Team
// https://codeforces.com/problemset/problem/988/A
// 10 mint avg

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i: v)
        cin >> i;

    vector<pair<int, int>> ans;
    for (int i=0; i<n; i++) {
        bool status = true;
        for (int j=0; j<ans.size(); j++) {
            if (ans[j].second == v[i])
                status = false;
        }
        if (status) {
            ans.push_back({i+1, v[i]});
        }
    }

    if (ans.size() < k) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i=0; i<k; i++) {
            cout << ans[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}