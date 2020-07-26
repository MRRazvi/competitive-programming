#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &input: a)
            cin >> input;

        int flag = 1;
        for (int i=0; i<n/2; i++) {
            if (a[i] != a[a.size()-1-i]) {
                flag = 0;
            }
        }

        if (a[(n/2)+1]+1 == a[n/2])
            flag = 0;

        if (flag)
            cout << "yes";
        else
            cout << "no";
        cout << endl;
    }

    return 0;
}