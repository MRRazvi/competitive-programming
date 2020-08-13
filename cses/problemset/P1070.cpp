// Permutations
// https://cses.fi/problemset/task/1070/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> v;
    for (int i=0; i<n; i++) {
        if ((i+1)%2==0)
            v.push_back(i+1);
    }
    for (int i=0; i<n; i++) {
        if ((i+1)%2!=0)
            v.push_back(i+1);
    }

    for (auto num: v)
        cout << num << " ";
    cout << endl;
    return 0;
}