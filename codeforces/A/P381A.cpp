#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    int s, d, l, r;
    s = d = 0;
    l = 0;
    r = n-1;
    for (int i=0; i<n; i++) {
        if (i%2 != 0) {
            if (v[l] > v[r]) {
                s += v[l++];
            } else {
                s += v[r--];
            }
        } else {
            if (v[l] > v[r]) {
                d += v[l++];
            } else {
                d += v[r--];
            }
        }
    }

    if (s > d)
        cout << s << " " << d;
    else
        cout << d << " " << s;
    cout << endl;
    return 0;
}