// Repetitions
// https://cses.fi/problemset/task/1069/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
//    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;
    int max = 0, count = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] == s[i+1]) {
            count++;
        } else {
            if (count > max)
                max = count;
            count = 0;
        }
    }
    cout << max+1<< endl;
    return 0;
}