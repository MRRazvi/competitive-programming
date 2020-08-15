// A. Tram
// https://codeforces.com/problemset/problem/116/A
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


    int max = arr[0][1];
    for (int i=1; i<n; i++) {
        int capacity = abs(arr[i-1][1] - arr[i][0]) + arr[i][1];
        arr[i][1] = capacity;
        if (capacity > max)
            max = capacity;
    }
    cout << max << endl;
    return 0;
}