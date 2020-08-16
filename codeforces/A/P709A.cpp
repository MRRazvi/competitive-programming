// A. Juicer
// https://codeforces.com/contest/709/problem/A
// 5 mint avg

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
    freopen("output.txt", "w", stdout);

    // no. of oranges
    // max size of the orange
    int n, b, d;
    cin >> n >> b >> d;
    vector<int> a(n);
    for (auto &i: a)
        cin >> i;

    int sum = 0, count = 0;
    for (int i=0; i<n; i++) {
        if (a[i] <= b) {
            sum += a[i];
        }

        if (sum > d)
            count++, sum = 0;
    }
    cout << count << endl;
    return 0;
}