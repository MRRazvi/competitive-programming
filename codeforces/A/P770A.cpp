// A. New Password
// https://codeforces.com/contest/770/problem/A
// string, array, implementation
// 2 mint avg

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    char c = 'a';
    vector<char> ch;
    for (int i=0; i<k; i++)
        ch.push_back(c++);
    int index = 0;
    for (int i=0; i<n; i++) {
        cout << ch[index++];
        if (index == k)
            index = 0;
    }
    cout << endl;
    return 0;
}