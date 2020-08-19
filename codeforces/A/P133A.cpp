// A. HQ9+
// https://codeforces.com/problemset/problem/133/A
// 5 mint avg
// string

#include <iostream>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    string p;
    cin >> p;

    bool status = false;
    for (int i=0; i<p.size(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
            status = true;
    }
    if (status)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}