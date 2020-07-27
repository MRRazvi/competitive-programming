#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << "1" << endl;
        } else {
            int count = 1;
            for (int i=1; i<=n; i++) {
                if (i%2 != 0)
                    count += count;
                else
                    count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}