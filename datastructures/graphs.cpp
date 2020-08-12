#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll p[n];
        for (ll i=0; i<n; i++)
            cin >> p[i];

        int moves = 0;
        for (ll i=0; i<n; i++) {
            if (p[i] == k)
                moves++;

            if (p[i] < k) {
                ll num = p[i];
                ll count = 0;
                while (true) {
                    num += p[i];
                    count++;

                    if (num == k) {
                        moves += count;
                    }

                    if (num > k) {
                        break;
                    }
                }
            }
        }

        if (moves)
            cout << moves;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}