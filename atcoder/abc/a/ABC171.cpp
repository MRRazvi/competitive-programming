#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char a;
    cin >> a;
    if (isupper(a))
        cout << "A";
    else
        cout << "a";
    cout << endl;
    return 0;
}