#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int count = 0;

    if (n <= 2) {
        cout << 1 << endl;
        return 0;
    }

    while (n > 0) {
        n -= 2;
        count++;
    }
    cout << count << endl;
    return 0;
}