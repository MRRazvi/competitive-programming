// ADAGCD - Ada and GCD
// https://www.spoj.com/problems/ADAGCD/

#include <iostream>
#include <vector>
#include <algorithm>

typedef int64_t ll;
using namespace std;
int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    vector<ll> nums;
    while (t--) {
        int n;
        cin >> n;
        vector<int> m(n);
        for (auto &i: m)
            cin >> i;

        ll num = 1;
        for (ll i=0; i<n; i++)
            num *= m[i];
        nums.push_back(num);
    }

    ll ans = nums[0];
    for (int i=1; i<nums.size(); i++) {
        ans = __gcd(ans, nums[i]);
    }
    cout << (ans%1000000007) << endl;
    return 0;
}