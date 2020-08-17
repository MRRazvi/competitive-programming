// A. Games
// https://codeforces.com/problemset/problem/268/A
// 10 mint avg
// array, implementation

#include <iostream>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n][2];
    for (int i=0; i<n; i++)
        cin >> arr[i][0] >> arr[i][1];

    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i != j && arr[i][0] == arr[j][1])
                count++;
        }
    }
    cout << count << endl;
    return 0;
}