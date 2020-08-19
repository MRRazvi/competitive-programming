// A. Dragons
// https://codeforces.com/contest/230/problem/A
// 20 mint avg
// array, sorting, implementation

#include <iostream>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int s, n;
    cin >> s >> n;
    array<int, 2> arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i][0] >> arr[i][1];

    sort(arr, arr+n);

    bool status = true;
    for (int i=0; i<n; i++) {
        if (arr[i][0] < s) {
            s += arr[i][1];
        } else {
            status = false;
        }
    }

    if (status)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}