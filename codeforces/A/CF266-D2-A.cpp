#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<s.length() - 1; i++) {
        if (s[i] == s[i+1])
            count++;
    }
    cout << count << endl;
    return 0;
}