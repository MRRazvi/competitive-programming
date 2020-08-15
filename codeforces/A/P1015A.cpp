// A. Points in Segments
// https://codeforces.com/contest/1015/problem/A
// 10 mint avg
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    int arr[n][2];
    for (int i=0; i<n; i++) {
        for (int j=0; j<2; j++) {
            cin >> arr[i][j];
        }
    }

    vector<bool> ans(m, false);
    for (int i=0; i<n; i++) {
        for (int j=arr[i][0]; j<=arr[i][1]; j++) {
            ans[j-1] = true;
        }
    }

    int count = 0;
    for (int i=0; i<m; i++) {
        if (!ans[i]) {
            count++;
        }
    }

    if (count == 0) {
        cout << count << endl;
    } else {
        cout << count << endl;
        for (int i=0; i<m; i++) {
            if (!ans[i]) {
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}