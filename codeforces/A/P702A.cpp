// A. Maximum Increase
// https://codeforces.com/problemset/problem/702/A

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
    int count = 0, max = 0;
    for (int i=0; i<n-1; i++) {
        if (a[i+1] > a[i])
            count++;
        else
            count = 0;

        if (count > max)
            max = count;
    }
    if (max == 0)
        cout << 1;
    else
        cout << (max + 1);
    cout << endl;
    return 0;
}