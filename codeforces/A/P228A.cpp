// A. Is your horseshoe on the other hoof?
// https://codeforces.com/problemset/problem/228/A
// 2 min avg

#include <iostream>
#include <set>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int count = 0;
    map<int, int> mp;
    for (int i=0; i<4; i++) {
        int input;
        cin >> input;
        mp.insert({input, 0});
        mp[input]++;

        if (mp[input] > 1)
            count++;
    }
    cout << count << endl;
    return 0;
}