// Reverse The Number
// https://www.codechef.com/LRNDSA01/problems/FLOW007

#include <iostream>
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

        reverse(s.begin(), s.end());
        bool flag = false;
        for (int i=0; i<s.size(); i++) {
            if (s[i] != '0' && !flag)
                flag = true;

            if (flag)
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}