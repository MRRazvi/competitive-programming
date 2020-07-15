#include <iostream>
using namespace std;

int main() {
    int s, t;
    cin >> s >> t;
    int count = 0;
    for (int i=s; i<=t; i++) {
        if (i<=t)
            count++;
    }
    if (count==0)
        cout << 1;
    else
        cout << count;
    cout << endl;
    return 0;
}