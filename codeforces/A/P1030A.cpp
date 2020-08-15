// A. In Search of an Easy Problem
// https://codeforces.com/problemset/problem/1030/A
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &input: v)
        cin >> input;
    for (auto num: v) {
        if (num == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}