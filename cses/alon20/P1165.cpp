#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i=1; i<=n; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}