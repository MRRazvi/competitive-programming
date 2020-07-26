#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> w(n);
        for (auto &input: w)
            cin >> input;

        // solve
        int temp = w[0];
        int flag = 0;
        for (int i=1; i<n; i++) {
            if (w[i] != temp) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            sort(w.begin(), w.end());
            int sum = 0;
            for (auto num: w)
                sum += num;
            cout << sum - n * w[0] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}