#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int r;
    cin >> r;
    cout << setprecision(20) << 2*M_PI*r << endl;
    return 0;
}