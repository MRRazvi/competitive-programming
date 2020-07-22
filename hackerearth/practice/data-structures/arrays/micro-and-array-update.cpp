#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Micro and Array Update
// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &num: a)
            cin >> num;
        sort(a.begin(), a.end());
        if (a[0] >= k)
            cout << 0;
        else
            cout << abs(k-a[0]);
        cout << endl;
    }
    return 0;
}