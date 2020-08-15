#include <iostream>
#include <set>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> s;
    int num;
    for (int i=0; i<n; i++) {
        cin >> num;
        s.insert(num);
    }
    for (auto num: s)
        cout << num << " ";
    cout << endl;
    return 0;
}