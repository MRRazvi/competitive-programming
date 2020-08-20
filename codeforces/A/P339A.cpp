// A. Helpful Maths
// https://codeforces.com/contest/339/problem/A
// implementation, string, array
// 2 mint avg

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    vector<char> v;
    for (int i=0; i<s.size(); i+=2) {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for (int i=0; i<v.size()-1; i++) {
        cout << v[i] << "+";
    }
    cout << v[v.size()-1] << endl;
    return 0;
}