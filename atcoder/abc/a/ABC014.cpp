#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a <= b) {
        cout << b - a << endl;
        return 0;
    } else {
        int count = 0;
        while (a%b!=0) {
            count++;
            a++;
        }
        cout << count << endl;
    }
    return 0;
}