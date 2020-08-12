#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

typedef long long ll;
typedef long long int lli;
using namespace std;

const int n = 3;
bool path[n][n] = {false};

bool find_path(int matrix[n][n], int x, int y) {
    if (x < 0 || x > n || y < 0 || y > n)
        return false;

    if (x == n-1 && y == n-1) // reach the point
        return true;

    if (matrix[x][y] == 0 || path[x][y])
        return false;

    // right
    path[x][y] = true;
    if (find_path(matrix, x, y+1)) {
        path[x][y] = false;
        return true; // right
    }
    if (find_path(matrix, x, y-1)) {
        path[x][y] = false;
        return true; // left
    }
    if (find_path(matrix, x+1, y)) {
        path[x][y] = false;
        return true; // bottom
    }
    if (find_path(matrix, x-1, y)) {
        path[x][y] = false;
        return true; // top
    }

    return false;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int matrix[n][n];
    for (auto &i: matrix) {
        for (int &j: i) {
            cin >> j;
        }
    }

    cout << find_path(matrix, 0, 0) << endl;

    for (auto &i: path) {
        for (auto j: i) {
            cout << j <<  " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}