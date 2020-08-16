// A. Colorful Stones (Simplified Edition)
// https://codeforces.com/contest/265/problem/A
// 5 mint avg

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
    freopen("output.txt", "w", stdout);

    string s, t;
    cin >> s >> t;
    int index = 0;
    for (int i=0; i<t.size(); i++) {
        if (s[index] == t[i])
            index++;
    }
    cout << index+1 << endl;
    return 0;
}