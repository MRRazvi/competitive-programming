#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// https://codeforces.com/problemset/problem/136/A
// Codeforces Beta Round #97 (Div. 2)
// A. Presents
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];

    vector<int> result(n);
    for (int j=0; j<n; j++) {
        result[v.at(j) - 1] = j+1;
    }
    for (auto num: result)
        cout << num << " ";
    cout << endl;
    return 0;
}
