#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, d;
    cin >> m >> d;
    if (m%d==0)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}