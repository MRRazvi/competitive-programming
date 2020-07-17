#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 100000000;
    vector<bool> v(n+1, true);
    v[0] = v[1] = false;
    for (int i=2; (long long)i*i<n; i++) {
        if (v[i]) {
            for (int j=i*i; j<=n; j+=i) {
                v[j] = false;
            }
        }
    }

    int count = 100;
    for (int i=2; i<n; i++) {
        if (v[i]) {
            if (count==100) {
                printf("%d\n", i);
                count = 0;
            }
            count++;
        }
    }
    return 0;
}
