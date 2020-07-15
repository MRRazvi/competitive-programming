#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (s[2] == s[3] && s[4] == s[5])
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}