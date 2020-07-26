#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> forgotten(n);
        for (auto &input: forgotten)
            cin >> input;
        set<string> modern;
        for (int i=0; i<k; i++) {
            int l;
            cin >> l;
            for (int j=0; j<l; j++) {
                string s;
                cin >> s;
                modern.insert(s);
            }
        }

        for (const auto& word: forgotten) {
            if (modern.count(word))
                cout << "YES ";
            else
                cout << "NO ";
        }
        cout << endl;
    }
    return 0;
}