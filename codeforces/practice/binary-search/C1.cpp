//
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int binary_search(vector<int>& v, int num) {
    int L = -1;
    int R = v.size();
    while (R > L+1) {
        int M = (L + R) / 2;
        if (v[M] < num)
            L = M;
        else
            R = M;
    }
    return R+1;
}

int main() {
    freopen("output.txt", "w", stdout);

    int n, k, input;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i: a)
        cin >> i;
    for (int i=0; i<k; i++) {
        cin >> input;
        cout << binary_search(a, input) << endl;
    }
    return 0;
}