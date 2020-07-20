#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n][2];
    for (int i=0; i<n; i++) {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for (int i=0; i<n; i++) {
        if (arr[i][0] != arr[i][1]) {
            cout << "rated" << endl;
            return 0;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (arr[i][0] > arr[j][0]) {
                cout << "unrated" << endl;
                return 0;
            }
        }
    }

    cout << "maybe" << endl;
    return 0;
}