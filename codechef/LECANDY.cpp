#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        int sum = 0;
        for (int i=0; i<n; i++) {
            int input;
            cin >> input;
            sum += input;
        }

        if (sum <= c)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}