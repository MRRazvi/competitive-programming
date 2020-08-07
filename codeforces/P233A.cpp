// A. Perfect Permutation
// https://codeforces.com/problemset/problem/233/A
#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    if (n%2==1) {
        cout << -1;
    } else {
        cout << "2 1 ";
        for (int i=3; i<n; i+=2) {
            cout << i+1 << " " << i;
        }
    }
    cout << endl;
    return 0;
}