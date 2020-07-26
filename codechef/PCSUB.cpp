#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string  s; cin >> s;
        int count = 0;
        for (int i=0; i<n; i++) {
            if (s[i] == '1')
                count++;
        }
        cout << (count * (count+1))/2 << endl;
    }

    return 0;
}