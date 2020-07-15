#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> s = {1, 2, 3, 4, 5, 0};
    for (int i=0; i<5; i++) {
        int num;
        cin >> num;
        s.erase(num);
    }
    cout << *s.begin() << endl;
    return 0;
}