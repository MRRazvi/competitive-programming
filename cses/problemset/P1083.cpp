// Missing Number
// https://cses.fi/problemset/task/1083/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> v(n-1);
    for (auto &i: v) cin >> i;
    map<int, int> mp;
    for (int i=0; i<n; i++) mp.insert({i+1, 0});
    for (int i=0; i<n-1; i++) mp[v[i]]++;
    for (auto m: mp) {
        if (m.second == 0) {
            cout << m.first << endl;
            return 0;
        }
    }
    return 0;
}