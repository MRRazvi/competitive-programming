#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    if (s.length() + 1 != t.length()) {
        cout << "No" << endl;
        return 0;
    }
    t.pop_back();
    if (s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}