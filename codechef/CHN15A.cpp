#include <iostream>
#include <vector>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int input;
        for (int i=0; i<n; i++) {
            cin >> input;
            v[i] = input + k;
        }

        int count = 0;
        for (auto num: v) {
            if (num%7 == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}