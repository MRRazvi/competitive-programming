// Check if subarray with 0 sum is exists or not
// https://www.techiedelight.com/check-subarray-with-0-sum-exists-not/
#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    vector<int> v = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};

    bool answer = false;
    for (int i=0; i<v.size(); i++) {
        int sum = v[i];
        for (int j=0; j<v.size(); j++) {
            if (v[j] < 0 && i!=j)
                sum -= v[j];
            else
                sum += v[j];

            if (sum == 0) {
                answer = true;
                break;
            }
        }

        if (answer)
            break;
    }

    cout << ((answer) ? "Exist" : "Not Exist") << endl;
    return 0;
}