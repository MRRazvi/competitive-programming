// A. Lucky Division
// https://codeforces.com/problemset/problem/122/A
// 10 mint avg
// mod math, implementation

#include <iostream>
#include <vector>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> lucky = {4, 7, 47, 74, 477, 744};
    bool flag = false;
    for (auto num: lucky) {
        if (n%num == 0) {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}