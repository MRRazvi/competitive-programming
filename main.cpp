#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    vector<int> v = {1, 2, 3, 4, 5};
    int num = 4;

    int left = 0, right = v.size()-1;
    while (left < right) {
        int mid = (left+right)/2;
        if (v[mid] == num) {
            // found
        }
        if (v[mid] > num)
            right = mid-1;
        else
            left = mid+1;
    }
    return 0;
}