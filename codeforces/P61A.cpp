// A. Ultra-Fast Mathematician
// https://codeforces.com/problemset/problem/61/A
#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string num1, num2;
    cin >> num1 >> num2;

    for (int i=0; i<num1.size(); i++) {
        if (num1[i] == num2[i])
            cout << 0;
        else
            cout << 1;
    }
    cout << endl;
    return 0;
}