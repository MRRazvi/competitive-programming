#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1.compare(s2) < 0)
        cout << -1;
    else if (s1.compare(s2) > 0)
        cout << 1;
    else
        cout << 0;
    cout << endl;
    return 0;
}