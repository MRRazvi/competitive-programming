// A. Team Olympiad
// https://codeforces.com/contest/490/problem/A
// 15 mint avg
// greedy, array, implementation

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &i: v) {
        cin >> i;
        mp.insert({i, 0});
        mp[i]++;
    }

    int teams = 0;
    for (int i=0; i<n; i++) {
        if (mp[1] >= 1 && mp[2] >= 1 && mp[3] >= 1) {
            mp[1]--, mp[2]--, mp[3]--;
            teams++;
        }
    }

    if (teams) {
        cout << teams << endl;
        for (int i=0; i<teams; i++) {
            int index1 = distance(v.begin(), find(v.begin(), v.end(), 1));
            int index2 = distance(v.begin(), find(v.begin(), v.end(), 2));
            int index3 = distance(v.begin(), find(v.begin(), v.end(), 3));
            cout << index1+1 << " " << index2+1 << " " << index3+1 << endl;
            v[index1] = v[index2] = v[index3] = -1;
        }
    } else {
        cout << 0 << endl;
    }
    return 0;
}