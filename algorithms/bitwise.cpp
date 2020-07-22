#include <iostream>

using namespace std;
/**
 * Why Bitwise?
 *
 * 1) It's very fast, faster then any operator
 * 2) % operator O(n cube) but in bitwise we can do in O(1d)
 */
int main() {
    int a, b;

    // AND (&) Operator
    // OR Operator
    // XOR Operator (^)

    // Left Shift (<<)
    // a * 2 power n
    cout << (2 << 1) << endl; // 4

    // Right Shift (>>)
    // a / 2 power n
    cout << (5 >> 1) << endl; // 2

    // Not/Complement Operator (~)
    cout << (~4) << endl;

    // even/odd number
    a = 1;
    if (a & 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;

    // min number
    a = 4, b = 3;
    if (a ^ b)
        cout << a << endl;
    else
        cout << b << endl;
    return 0;
}
