#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s1, s2, s3;
    int e1, e2, e3;
    cin >> s1 >> e1;
    cin >> s2 >> e2;
    cin >> s3 >> e3;
    cout << (s1 * (e1 * 0.1)) + (s2 * (e2 * 0.1)) + (s3 * (e3 * 0.1)) << endl;
    return 0;
}