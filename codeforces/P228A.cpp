// A. Is your horseshoe on the other hoof?
// https://codeforces.com/problemset/problem/228/A
#include <iostream>
#include <set>

typedef long long ll;
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    set<int> s;
    for (int i=0; i<4; i++) {
        int input;
        cin >> input;
        s.insert(input);
    }
    cout << 4 - s.size() << endl;
    return 0;
}