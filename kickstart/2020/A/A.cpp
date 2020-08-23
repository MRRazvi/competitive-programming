// Allocation
// Round A 2020
// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    int tc = 1;
    while (t--) {
        int n, b;
        cin >> n >> b;
        vector<int> a(n);
        for (auto &i: a)
            cin >> i;
        sort(a.begin(), a.end());
        int count = 0;
        for (int i=0; i<n; i++) {
            if (b >= a[i]) {
                b -= a[i];
                count++;
            }
        }
        printf("Case #%d: %d\n", tc, count);
        tc++;
    }
    return 0;
}