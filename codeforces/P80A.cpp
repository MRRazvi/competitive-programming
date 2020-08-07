// A. Panoramix's Prediction
// https://codeforces.com/problemset/problem/80/A
#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

bool isPrime(int num){
    bool flag = true;
    for(int i=2; i<=num/2; i++) {
        if(num%i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    int count = 0;
    for (int i=n+1; i<=m; i++) {
        bool status = isPrime(i);
        if (status)
            count++;

        if (status && i == m && count == 1) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}