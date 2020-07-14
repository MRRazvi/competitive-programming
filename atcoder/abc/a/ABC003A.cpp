#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    double result = 0;
    for (int i=1; i<=n; i++) {
        result += (10000 * i) / n;
    }
    cout << result << endl;
}