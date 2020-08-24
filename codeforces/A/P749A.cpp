// A. Bachgold Problem
// https://codeforces.com/problemset/problem/749/A

#include <iostream>
#include <vector>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int count = 0;
    if (n%2 == 0) {
        count = n/2;
        cout << count << endl;
        for (int i=0; i<count; i++)
            cout << "2 ";
        cout << endl;
    } else {
        count = n/2 - 1;
        cout << count+1 << endl;
        for (int i=0; i<count; i++)
            cout << "2 ";
        cout << "3" << endl;
    }

    return 0;
}