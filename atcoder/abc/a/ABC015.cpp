#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    if (a.length() > b.length())
        cout << a;
    else
        cout << b;
    cout << endl;
    return 0;
}