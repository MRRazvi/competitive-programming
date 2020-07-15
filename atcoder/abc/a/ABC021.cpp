#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n <= 1) {
        cout << 1 << endl << 1 << endl;
        return 0;
    } else {
        vector<int> v;
        while (n > 1) {
            n -= 2;
            v.push_back(2);
        }
        v.push_back(1);
        cout << v.size() << endl;
        for (int i=v.size() - 1; i>=0; i--)
            cout << v[i] << endl;
    }
    return 0;
}