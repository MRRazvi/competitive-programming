#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, h;
    cin >> n >> h;
    vector<int> v(n);
    for (auto &num: v)
        cin >> num;
    int count = 0;
    for (int i=0; i<n; i++) {
        if (v[i] <= h)
            count++;
        else {
            int temp = 0;
            while (v[i] > h) {
                v[i] /= 2;
                temp += 2;
            }
            count += temp;
        }
    }
    cout << count << endl;
    return 0;
}