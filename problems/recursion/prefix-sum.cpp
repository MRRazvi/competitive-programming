// Dynamic Programming for Coding Interviews
// Question 1.2

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

void prefix_sum(vector<int>& arr, int start, int end) {
    if (start == end)
        return;

    arr[start] = arr[start] + arr[start-1];
    prefix_sum(arr, start+1, end);
}

int main() {
    freopen("output.txt", "w", stdout);

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    prefix_sum(arr, 1, arr.size());

    for (auto n: arr)
        cout << n << " ";
    cout << endl;
    return 0;
}