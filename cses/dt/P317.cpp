#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;
    int max = 0, count = 0;
    for (int i=0; i<s.length()-1; i++) {
        if (s[i] == s[i+1]) {
            count++;
        } else {
            if (count >= max) {
                max = count;
            }
            count = 0;
        }
    }
    if (count > max) {
        max = count;
    }
    cout << max+1 << endl;
    return 0;
}