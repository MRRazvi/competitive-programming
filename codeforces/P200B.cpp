// B. Drinks
// https://codeforces.com/problemset/problem/200/B
#include <iostream>
#include <iomanip>

typedef long long ll;
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, sum=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int input;
        cin >> input;
        sum += input;
    }

    cout << setprecision(12) << (double) sum/n << endl;
    return 0;
}