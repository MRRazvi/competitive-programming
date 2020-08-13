// List
// https://cses.fi/alon20/task/1166/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//    freopen("output.txt", "w", stdout);

    // 1 2 3 4 5
    // 1 3 4 2 4
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> v;
    for (int i=0; i<n; i++) {
        if (i%2!=0)
            v.push_back(i+1);
    }
    for (int i=0; i<n; i++) {
        if (i%2==0)
            v.push_back(i+1);
    }
    for (auto num: v)
        cout << num << " ";
    cout << endl;
    return 0;
}