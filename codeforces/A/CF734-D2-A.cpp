#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a, d;
    a = d = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
    cout << endl;
    return 0;
}