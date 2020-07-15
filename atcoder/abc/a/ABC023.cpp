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
    int remainder = 0, result = 0;
    while (n>0) {
        remainder = n%10;
        result += remainder;
        n /= 10;
    }
    cout << result << endl;
    return 0;
}