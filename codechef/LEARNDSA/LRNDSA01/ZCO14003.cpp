// Smart Phone (ZCO14003)
// Zonal Computing Olympiad 2014, 30 Nov 2013
// https://www.codechef.com/LRNDSA01/problems/ZCO14003

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto& i: v)
        cin >> i;

    vector<ll> profit;
    for (ll i=0; i<n; i++) {
        ll max = 0;
        for (ll j=0; j<n; j++) {
            if (v[j] >= v[i])
                max += v[i];
        }
        profit.push_back(max);
    }

    cout << *max_element(profit.begin(), profit.end()) << endl;
    return 0;
}