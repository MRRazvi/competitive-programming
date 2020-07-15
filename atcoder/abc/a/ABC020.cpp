#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n==1)
        cout << "ABC";
    else
        cout << "chokudai";
    cout << endl;
    return 0;
}