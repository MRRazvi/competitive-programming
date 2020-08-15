// A. Lights Out
// https://codeforces.com/problemset/problem/275/A
#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int grid[5][5];
    int toggled[5][5];
    for (int i=1; i<=3; i++) {
        for (int j=1; j<=3; j++) {
            cin >> grid[i][j];
            toggled[i][j] = grid[i][j];
        }
    }

    for (int i=1; i<=3; i++) {
        for (int j=1; j<=3; j++) {
            if (grid[i][j] != 0) {
                toggled[i][j-1] += grid[i][j];
                toggled[i][j+1] += grid[i][j];
                toggled[i-1][j] += grid[i][j];
                toggled[i+1][j] += grid[i][j];
            }
        }
    }

    for (int i=1; i<=3; i++) {
        for (int j=1; j<=3; j++) {
            if (toggled[i][j]%2==0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}