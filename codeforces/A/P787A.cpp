// A. The Monster
// https://codeforces.com/contest/787/problem/A
// 10 mint avg
// array, math, implementation

#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v1, v2;
    v1.push_back(b);
    v2.push_back(d);
    for (int i=1; i<=200; i++) {
        v1.push_back(b+(i*a));
        v2.push_back(d+(i*c));
    }

    for (int i=0; i<v1.size(); i++) {
        for (int j=0; j<v2.size(); j++) {
            if (v1[i] == v2[j]) {
                cout << v1[i] << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}