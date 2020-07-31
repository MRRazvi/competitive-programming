#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> v = {1, 1, 3};
    do {
        for (auto num: v)
            cout << num << " ";
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}