#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
    while (n!=1) {
        cout << n << " ";
        if (n%2==0)
            n = n/2;
        else
            n = (n*3) + 1;
    }
    cout << 1 << endl;
    return 0;
}