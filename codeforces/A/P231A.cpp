#include <iostream>

using namespace std;

int main() {
    int n, count, result = 0, temp;
    cin >> n;
    for (int i=0; i<n; i++) {
        count = 0;
        for (int j=0; j<3; j++) {
            cin >> temp;
            if (temp == 1)
                count++;
        }

        if (count >= 2)
            result++;
    }
    cout << result << endl;
    return 0;
}
