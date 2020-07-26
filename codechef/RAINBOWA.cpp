#include <iostream>
#include <vector>
#include <map>

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

        map<int, int> mp;
        for (int i=0; i<7; i++)
            mp.insert({i+1, 0});

        int flag = 1;
        for (int i=0; i<=n/2; i++) {
            mp[a[i]]++;
            if (a[i] != a[n-i-1])
                flag = 0;
        }

        for (auto m: mp) {
            if (m.second == 0)
                flag = 0;
        }

        if (flag)
            cout << "yes";
        else
            cout << "no";
        cout << endl;
    }

    return 0;
}