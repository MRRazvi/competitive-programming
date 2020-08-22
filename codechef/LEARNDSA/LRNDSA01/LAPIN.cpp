// Lapindromes
// https://www.codechef.com/LRNDSA01/problems/LAPIN

#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int mid = s.size()/2;
        string s1 = s.substr(0, mid);
        if (s.size()%2 != 0)
            mid += 1;
        string s2 = s.substr(mid, s.size());

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}