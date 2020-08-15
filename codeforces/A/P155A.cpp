// A. I_love_%username%
// https://codeforces.com/contest/155/problem/A
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &input: a)
        cin >> input;

    int count = 0;
    for (int i=0; i<a.size(); i++) {
        if (*min_element(a.begin(), a.begin()+i) > a[i]) {
            count++;
        } else if (*max_element(a.begin(), a.begin()+i) < a[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}