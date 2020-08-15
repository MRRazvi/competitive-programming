// A. Calculating Function
// https://codeforces.com/problemset/problem/486/A
#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    if (n%2==0) {
        cout << n/2;
    } else {
        cout << (n/2+1) * -1;
    }
    cout << endl;
    return 0;
}