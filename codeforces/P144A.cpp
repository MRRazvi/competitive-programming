#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin >> v[i];
    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=1; j<n - 1; j++) {
            if (v[j] < v[j+1] && v[j+1] != v[j]) {
                swap(v[j+1], v[j]);
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}