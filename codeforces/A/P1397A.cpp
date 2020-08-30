// A. Juggling Letters
// https://codeforces.com/contest/1397/problem/A

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> s(n);
        for (auto& i: s)
            cin >> i;

        map<char, int> mp;
        for (int i=0; i<s.size(); i++) {
            for (int j=0; j<s[i].size(); j++) {
                mp.insert({s[i][j], 0});
                mp[s[i][j]]++;
            }
        }
        bool status = true;
        for (auto i: mp) {
            if (i.second%n != 0) status = false;
        }
        if (status)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
