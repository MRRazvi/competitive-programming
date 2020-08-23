// A. Little Elephant and BitsA. Little Elephant and Bits
// https://codeforces.com/contest/258/problem/A

#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    string a;
    cin >> a;

    bool flag = true;
    for (int i=0; i<a.size(); i++) {
        if (a[i] == '0' && flag) {
            flag = false;
            continue;
        }

        if (i == a.size()-1 && flag)
            break;

        cout << a[i];
    }
    cout << endl;
    return 0;
}