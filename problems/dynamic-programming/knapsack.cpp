#include <iostream>
#include <vector>

typedef long long ll;
typedef long long int lli;
using namespace std;

int knapsack(vector<int> w, vector<int> v, int weight, int index) {
    if (weight == 0 || index == 0)
        return 0;

    if (w[index-1] > weight)
        return knapsack(w, v, weight, index-1);
    return max(v[index-1] + knapsack(w, v, weight-w[index-1], index-1), knapsack(w, v, weight, index-1));
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n, weight;
        cin >> n >> weight;
        vector<int> w(n);
        vector<int> v(n);

        for (auto &i: v)
            cin >> i;

        for (auto &i: w)
            cin >> i;

        cout << knapsack(w, v, weight, n) << endl;
    }
    return 0;
}