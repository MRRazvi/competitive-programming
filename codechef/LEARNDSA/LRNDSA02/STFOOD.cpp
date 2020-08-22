// Chef and Street Food
// https://www.codechef.com/LRNDSA02/problems/STFOOD

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> profit;
        for (int i=0; i<n; i++) {
            int s, p, v;
            cin >> s >> p >> v;
            s++;
            profit.push_back((p/s) * v);
        }
        cout << *max_element(profit.begin(), profit.end()) << endl;
    }
    return 0;
}