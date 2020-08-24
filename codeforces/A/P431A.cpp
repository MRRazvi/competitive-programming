#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    vector<int> v = {a1, a2, a3, a4};
    int sum = 0;
    for (int i=0; i<s.length(); i++) {
        int index = s[i] - '0';
        sum += v[index-1];
    }
    cout << sum << endl;
    return 0;
}