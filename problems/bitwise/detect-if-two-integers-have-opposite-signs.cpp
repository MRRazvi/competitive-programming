#include <iostream>

using namespace std;

bool detect_opposite_signs(int num1, int num2) {
    return ((num1 ^ num2) < 0);
}

int main() {
    cout << detect_opposite_signs(-1, -1) << endl;
    cout << detect_opposite_signs(-1, 1) << endl;
    cout << detect_opposite_signs(1, 1) << endl;

    return 0;
}