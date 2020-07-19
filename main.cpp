#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int l, u;
    l = u = 0;
    for (auto c: s) {
        if (islower(c))
            l++;
        else
            u++;
    }
    if (u > l)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}