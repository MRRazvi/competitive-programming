#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int v[n][3];
    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++)
            cin >> v[i][j];
    }
    int count = 0;
    for (int i=0; i<n; i++) {
        int temp = 0;
        for (int j=0; j<3; j++) {
            if (v[i][j] == 1) {
                temp++;
            }
        }
        if (temp >= 2)
            count++;
    }
    cout << count << endl;
    return 0;
}