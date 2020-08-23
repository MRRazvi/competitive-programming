// 543 - Goldbach's Conjecture
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=484

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

vector<ll> primes;

void sieve(ll num) {
    primes.clear();
    vector<bool> nums(num+1, true);
    nums[0] = nums[1] = false;
    for (ll i=2; i*i<=num; i++) {
        if (!nums[i])
            continue;
        for (ll j=i*i; j<=num; j+=i)
            nums[j] = false;
    }

    for (int i=2; i<=num; i++) {
        if (nums[i])
            primes.push_back(i);
    }
}

int main() {
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    sieve(1e8);

    ll n;
    while (cin >> n) {
        for (ll i=0; i<=n; i++) {
            bool flag = false;
            for (ll j=0; j<=n; j++) {
                if (primes[i] + primes[j] == n) {
                    printf("%d = %d + %d\n", n, primes[i], primes[j]);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
    return 0;
}