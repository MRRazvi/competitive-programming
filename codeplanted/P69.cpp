// Sort by Frequency
// https://www.codeplanted.com/practice/69
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c: s) {
        mp.insert({c, 0});
        mp[c]++;
    }

    int max = 0;
    char c;
    for (auto a: mp) {
        for (auto b: mp) {
            if (b.second != -1) {
                if (b.second > max) {
                    max = b.second;
                    c = b.first;
                }
            }
        }

        for (int i=0; i<max; i++) {
            cout << c;
        }
        max = 0;
        mp[c] = -1;
    }
    cout << endl;
    return 0;
}