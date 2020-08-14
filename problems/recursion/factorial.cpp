// Dynamic Programming for Coding Interviews
// Question 1.1

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

/**
 * F(n) = n * F(n)  if n>1
 *      = 1         if n<1
 */
ll factorial(ll num) {
    if (num == 1 || num == 0)
        return 1;
    return factorial(num - 1) * num;
}

int main() {
    freopen("output.txt", "w", stdout);

    cout << factorial(5) << endl;
    return 0;
}