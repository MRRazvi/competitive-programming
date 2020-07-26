#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        int arr[n][2];
        for (int i=0; i<n; i++) {
            cin >> arr[i][0];
            cin >> arr[i][1];
        }

        // solve
        int flag = 0;
        for (int i=0; i<n; i++) {
            if (arr[i][0] >= x-y && arr[i][1] <= k)
                flag = 1;
        }

        if (flag)
            cout << "LuckyChef";
        else
            cout << "UnluckyChef";
        cout << endl;
    }
    return 0;
}