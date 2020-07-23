#include <iostream>
typedef long long int ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll answer = 1 + n*(n+1)/2;
        cout << answer << endl;
    }
    return 0;
}