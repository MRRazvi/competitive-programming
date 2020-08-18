// A. Expression
// https://codeforces.com/problemset/problem/479/A
// 3 mint avg
// basi math, array, sort, implementation

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a+b+c);
    v.push_back(a+b*c);
    v.push_back(a*b+c);
    v.push_back(a*(b+c));
    v.push_back((a+b)*c);
    v.push_back(a*b*c);
    sort(v.begin(), v.end());
    cout << v[v.size()-1] << endl;
    return 0;
}