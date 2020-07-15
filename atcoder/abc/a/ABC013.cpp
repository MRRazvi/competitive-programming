#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char x;
    cin >> x;
    int result = 0;
    if (x=='A') result = 1;
    else if (x=='B') result = 2;
    else if (x=='C') result = 3;
    else if (x=='D') result = 4;
    else if (x=='E') result = 5;
    cout << result << endl;
    return 0;
}