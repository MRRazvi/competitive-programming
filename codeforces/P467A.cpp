// A. George and Accommodation
// https://codeforces.com/problemset/problem/467/A
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for (int i=0; i<n; i++) {
        for (int j=0; j<2; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;
    for (int i=0; i<n; i++) {
        if (abs(arr[i][0] - arr[i][1]) >= 2)
            count++;
    }

    cout << count << endl;
    return 0;
}