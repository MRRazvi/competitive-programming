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
    int min, max;
    min = max = 0;
    int index = 0;
    for (auto &input: a) {
        cin >> input;

        if (input <= a[min])
            min = index;
        if (input > a[max])
            max = index;
        index++;
    }

    if (max > min)
        cout << (max - 1) + (n - min) - 1 << endl;
    else
        cout << (max - 1) + (n - min) << endl;
    return 0;
}