#include <iostream>
#include <vector>

using namespace std;

int findIndex(vector<int> v, int value) {
    auto it = find(v.begin(), v.end(), value);
    return distance(v.begin(), it);
}
