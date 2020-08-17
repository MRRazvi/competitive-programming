#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    string comp = "hello";
    int index, count;
    index = count = 0;
    for (int i=0; i<s.size(); i++) {
        if (comp[index] == s[i])
            count++, index++;
    }
    if (comp.size() == count)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}