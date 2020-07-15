#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n == 12) {
        cout << 1 << endl;
        return 0;
    }
    cout << ++n << endl;
    return 0;
}