#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    swap(a, b);
    swap(a, c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}