#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int arr[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> arr[i][j];

            if (arr[i][j] == 1) {
                cout << abs(i-2) + abs(j-2) << endl;
                return 0;
            }
        }
    }
    return 0;
}