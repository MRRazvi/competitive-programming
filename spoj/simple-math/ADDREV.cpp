// ADDREV - Adding Reversed Numbers
// https://www.spoj.com/problems/ADDREV/

#include <iostream>
#include <vector>
#include <algorithm>

typedef int64_t ll;
using namespace std;
int main() {
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n1, n2;
        cin >> n1 >> n2;
        string num1, num2;
        num1 = to_string(n1);
        num2 = to_string(n2);
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        n1 = stoi(num1);
        n2 = stoi(num2);
        string sum = to_string(n1+n2);
        reverse(sum.begin(), sum.end());
        bool flag = true;
        for (int i=0; i<sum.size(); i++) {
            if (sum[i] == '0' && flag)
                continue;
            else
                flag = false;

            cout << sum[i];
        }
        cout << endl;
    }
    return 0;
}