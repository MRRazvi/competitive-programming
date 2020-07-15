#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;
    if (n.find('7') != string::npos)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}