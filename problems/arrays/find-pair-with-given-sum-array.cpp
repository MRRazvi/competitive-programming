// Find pair with given sum in an array
// https://www.techiedelight.com/find-pair-with-given-sum-array/
#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

pair<int, int> findPair(vector<int> v, int sum) {
    pair<int, int> answer;
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v.size(); j++) {
            if (v[i] + v[j] == sum && i != j) {
                answer.first = v[i];
                answer.second = v[j];
            }
        }
    }
    return answer;
}

int main() {
    freopen("output.txt", "w", stdout);

    pair<int, int> testcase1 = findPair({8, 7, 2, 5, 3, 1}, 10);
    cout << testcase1.first << "+" << testcase1.second << endl;

    return 0;
}