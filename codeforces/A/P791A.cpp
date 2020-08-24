#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int count = 0;
    do {
        count++;
        a *= 3;
        b *= 2;
    } while (a <= b);
    cout << count << endl;
    return 0;
}