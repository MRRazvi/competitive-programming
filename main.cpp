#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;


int main() {
    freopen("output.txt", "w", stdout);

    int y, w;
    cin >> y >> w;

    vector<string> p = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << p[max(y, w)-1] << endl;
    return 0;
}