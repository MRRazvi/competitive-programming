#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &input: v)
        cin >> input;

    long long sum = 0;
    int odd = INT_MAX;
    for (int i=0; i<n; i++) {
        sum += v[i];
        if (v[i]%2 != 0)
            odd = min(odd, v[i]);
    }

    if (sum%2 != 0)
        sum -= odd;
    cout << sum << endl;
    return 0;
}