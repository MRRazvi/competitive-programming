// A. Binary Search
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
// 5 min avg

#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

bool binary_search(vector<int>& v, int num) {
    int L = 0, R = v.size() - 1;
    while (L <= R) {
        int M = L + (R - L) / 2;
        if (v[M] == num)
            return true;
        else if (v[M] > num)
            R = M-1;
        else
            L = M+1;
    }
    return false;
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
        if (binary_search(a, input))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}