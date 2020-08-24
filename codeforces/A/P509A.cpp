// A. Maximum in Table
// https://codeforces.com/problemset/problem/509/A

#include <iostream>
#include <vector>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int matrix[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            matrix[i][j] = 1;
        }
    }

    for (int i=1; i<n; i++) {
        for (int j=1; j<n; j++) {
            matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
        }
    }

    vector<int> ans;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            ans.push_back(matrix[i][j]);
        }
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;
    return 0;
}