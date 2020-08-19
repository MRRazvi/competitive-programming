// A. Cookies
// https://codeforces.com/problemset/problem/129/A
// 5 mint avg
// array, implementation

#include <iostream>
#include <vector>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a)
        cin >> i;
    int count = 0;
    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=0; j<n; j++) {
            if (i != j)
                sum += a[j];
        }
        if (sum%2 == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}