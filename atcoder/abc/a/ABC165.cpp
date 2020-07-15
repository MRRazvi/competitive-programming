#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, a, b;
    cin >> k >> a >> b;
    int count = 1, mul;
    while (true) {
        mul = k*count;
        if (mul >= a && mul <= b) {
            cout << "OK" << endl;
            break;
        } else if (mul>b) {
            cout << "NG" << endl;
            break;
        }
        count++;
    }
    return 0;
}