// Parity Strings
// https://www.codeplanted.com/practice/21
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto c: s) {
            mp.insert({c, 0});
            mp[c]++;
        }

        int even, odd;
        even = odd = 0;
        for (auto m: mp) {
            if (m.second%2!=0) odd++;
            if (m.second%2==0) even++;
        }

        if (even == mp.size()) cout << 0;
        else if (odd == mp.size()) cout << 1;
        else cout << 2;
        cout << endl;
    }
    return 0;
}