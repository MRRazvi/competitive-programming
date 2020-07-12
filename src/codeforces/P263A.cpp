#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/263/A
// Codeforces Round #161 (Div. 2)
// A. Beautiful Matrix
int main() {
    int matrix[5][5];
    int x, y, n;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> n;
            matrix[i][j] = n;
            if (n == 1) {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(2 - x) + abs(2 - y) << endl;
    return 0;
}