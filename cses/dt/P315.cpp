#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    double r;
    cin >> r;
    printf("%.9lf\n", (4.0/3.0)*(M_PI*pow(r, 3)));
    return 0;
}

