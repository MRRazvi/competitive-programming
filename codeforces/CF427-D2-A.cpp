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
    int police = 0;
    int crime = 0;
    for (int i=0; i<n; i++) {
        if (v[i] > 0)
            police += v[i];
        else if (v[i] < 0 && police > 0)
            police--;
        else
            crime++;
    }
    cout << crime << endl;
    return 0;
}