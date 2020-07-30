// A. Beautiful Year
// https://codeforces.com/problemset/problem/271/A
#include <iostream>

using namespace std;

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        string s = to_string(y);
        bool flag = false;
        for (int i=0; i<4; i++) {
            for (int j=0; j<4; j++) {
                if(s[i] == s[j] && i != j) {
                    flag = true;
                    break;
                }
            }

            if (flag)
                break;
        }

        if (!flag) {
            cout << y << endl;
            return 0;
        }
    }
    return 0;
}