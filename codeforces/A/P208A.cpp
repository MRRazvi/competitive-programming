// A. Dubstep
// https://codeforces.com/problemset/problem/208/A
// 10 mint avg
// string, implementation

#include <iostream>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    bool space = false;
    int count = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            count++;
            if (space && count == 1)
                cout << " ";
        }
        else {
            space = true;
            count = 0;
            cout << s[i];
        }
    }
    return 0;
}