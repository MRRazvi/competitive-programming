#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &a: v)
        cin >> a;
    int score = 0;
    for (int i=0; i<n; i++) {
        if (v[i] >= v[k-1] && v[i] != 0)
            score++;
    }
    cout << score << endl;
    return 0;
}