#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, w;
    cin >> s >> w;
    if (w >= s)
        cout << "unsafe";
    else
        cout << "safe";
    cout << endl;
    return 0;
}