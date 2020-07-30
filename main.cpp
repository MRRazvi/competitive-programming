#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n-1);
    for (auto &input: v)
        cin >> input;
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i=0; i<n-2; i++) {
        if (v[i]+1 != v[i+1]) {
            ans = v[i]+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}