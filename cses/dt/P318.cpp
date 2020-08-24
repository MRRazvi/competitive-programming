// Missing
// https://cses.fi/dt/task/318/

#include <iostream>
#include <vector>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
//    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<bool> nums(n);
    for (int i=0; i<n; i++) {
        nums[i] = false;
    }

    n--;
    int input;
    for (int i=0; i<n; i++) {
        cin >> input;
        nums[input-1] = true;
    }

    int ans = 0;
    for (int i=0; i<n+1; i++) {
        if (!nums[i]) {
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}