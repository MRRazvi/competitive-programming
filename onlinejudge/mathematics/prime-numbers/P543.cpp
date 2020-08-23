// 543 - Goldbach's Conjecture
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=484

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

vector<bool> nums;

void sieve(ll num) {
    nums.assign(num+1, true);
    nums[0] = nums[1] = false;
    for (ll i=2; i*i<=num; i++) {
        if (!nums[i])
            continue;
        for (ll j=i*i; j<=num; j+=i)
            nums[j] = false;
    }
}

int main() {
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    sieve(1e6);
    ll n;
    while (cin >> n) {
        if (n == 0)
            break;

        for (ll i=3; i<n; i++) {
            if (nums[i]) {
                if (nums[n-i]) {
                    printf("%d = %d + %d\n", n, i, n-i);
                    break;
                }
            }
        }
    }
    return 0;
}